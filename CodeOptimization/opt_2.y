%{
  #include <bits/stdc++.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  using namespace std;

// yacc related 
int yylex();
extern int yylineno;

// Error Handling
void yyerror (const char *s) {
    fprintf (stderr, "\033[0;31mLine:%d | %s\n\033[0m\n",yylineno, s);
} 

extern FILE *yyin;

// Quadruple Structure
typedef struct quadruples {
    char *op;
    char *arg1;
    char *arg2;
    char *res;
} quad;

int quadlen = 0;
// Quadruples data structure
quad q[100];
// Top of stack
int top = -1;

// Quadruple functions
void push();
void pushi(char *i);
void pusha();
void pushx();
void pushab();
void codegen();
void codegen_assign();
void codegen_incdec(int o);
void for1();
void for2();
void for3();
void for4();
void printStack();
void printQuadraples();
// Optimization functions
void constantPropagation(int index, quad arr[100]);
int checkForDigits(char *ch);
char* compute(char *x, char *y, char *op);
void constantFolding(quad arr[100]);
void copyPropagation(quad arr[100]);
void DCE(quad arr[100]);
%}

%start StartFile

%union {
    char *sval;
    int nval;
}

// To access yyloc
%locations

%token <sval> T_PACKAGE T_IMPORT T_FUNC T_BREAK T_CONST T_CONTINUE T_PRINT
%token <sval> T_ELSE T_FOR T_IF T_RETURN T_VAR T_VAR_TYPE
%token <sval> T_BOOL_CONST T_IDENTIFIER T_STRING T_NIL_VAL
%token <sval> T_INTEGER 
%token <sval> T_FLOAT
%token <sval>  T_INCREMENT T_DECREMENT

%left <sval> T_ADD T_MINUS T_MULTIPLY T_DIVIDE T_MOD
%right <sval> T_ASSIGN T_NOT
%left <sval> T_LAND T_LOR T_EQL T_NEQ T_LEQ T_GEQ T_SEMICOLON
%left <sval> T_GTR T_LSR T_LEFTPARANTHESES T_RIGHTPARANTHESES T_LEFTBRACE T_RIGHTBRACE T_LEFTBRACKET T_RIGHTBRACKET T_COMMA T_PERIOD

%type <sval> unary_op bin_op math_op assign_op rel_op
%type <sval> Expression Operand BasicLit ExpressionList Declaration

%% 

StartFile:
    T_PACKAGE PackageName ImportDeclList TopLevelDeclList {
	};

Block:
    T_LEFTBRACE StatementList T_RIGHTBRACE {}
    | /*empty*/ {}; 

StatementList:
    StatementList Statement T_SEMICOLON {}
    | Statement T_SEMICOLON {}
    | StatementList Statement {}
    | Statement{};

Statement:
    Declaration {}
    | SimpleStmt {}
    | Block {}
    | IfStmt {}
    | ForStmt {} 
    | PrintStmt {};

SimpleStmt:
    Expression assign_op Expression { codegen_assign(); } 
    | Expression T_INCREMENT { codegen_incdec(1); }
    | Expression T_DECREMENT { codegen_incdec(0); } 
    | ExpressionList assign_op ExpressionList { }
    | /*empty*/{};

Declaration:
    T_VAR Expression Type assign_op ExpressionList { codegen_assign(); }
    | T_VAR Expression Type {}
    | T_CONST Expression Type assign_op ExpressionList { codegen_assign(); }
    | T_CONST Expression Type {}
    ;

PrintStmt:
    T_PRINT T_LEFTPARANTHESES T_STRING T_RIGHTPARANTHESES {};

FunctionDecl:
    T_FUNC T_IDENTIFIER T_LEFTPARANTHESES T_RIGHTPARANTHESES Block {};

TopLevelDeclList:
    TopLevelDeclList TopLevelDecl  {}
    | TopLevelDecl {}

TopLevelDecl:
    Declaration {}    
    | FunctionDecl {};

Type:
    T_VAR_TYPE {
    };

Operand:
    BasicLit {}
    | T_IDENTIFIER { pushi($1); }
    | T_LEFTPARANTHESES Expression T_RIGHTPARANTHESES {};


IfStmt:
    T_IF Expression Block
    | T_IF Expression Block T_ELSE Block
    | T_IF Expression Block T_ELSE IfStmt
    ;

ForStmt: 
    T_FOR SimpleStmt { for1(); } T_SEMICOLON Expression { for2(); } T_SEMICOLON SimpleStmt { for3(); } Block { for4(); }
    ;

ExpressionList:
    Expression {};

BasicLit:
    T_INTEGER { push(); }
    | T_FLOAT { push(); }
    | T_STRING { push(); }
    | T_BOOL_CONST { push(); }
    ;

Expression:
    Expression math_op Expression { codegen(); }
    | Expression rel_op Expression { codegen(); }
    | Expression bin_op Expression { }
    | unary_op Operand { }
    | Operand {};

bin_op:
    T_LOR { push(); }
    | T_LAND { push(); };

rel_op:
    T_EQL { push(); }
    | T_NEQ { push(); }
    | T_LSR { push(); }
    | T_LEQ { push(); }
    | T_GTR { push(); }
    | T_GEQ { push(); };

math_op:
    T_ADD { push(); }
    | T_MINUS { push(); }
    | T_MULTIPLY { push(); }
    | T_DIVIDE { push(); }
    | T_MOD { push(); };

unary_op:
    T_ADD { }
    | T_MINUS { }
    | T_NOT { };

assign_op:
    T_ASSIGN { push(); };

PackageName:
    T_IDENTIFIER {}
    | T_STRING {}
    | T_STRING T_SEMICOLON {};

ImportDeclList:
    ImportDeclList ImportDecl {}
    | ImportDecl {}
    | /*empty*/ {};

ImportDecl:
    T_IMPORT PackageName {}
    | T_IMPORT T_LEFTPARANTHESES ImportSpecList T_RIGHTPARANTHESES {};

ImportSpecList:
    ImportSpecList PackageName {}
    | PackageName {};

%%

#include "lex.yy.c"
#include <ctype.h>
#include <fstream>
// Stack
char st[100][100];
char i_[2] = "0";
// Temporary variable counter
int temp_i = 0;
// Char string to store temporary variable number
char tmp_i[3];
char temp[2] = "t";
// Array for labels
int label[20];
// Label number counter
int lnum = 0;
// Top of label stack
int ltop = 0;
// Label counter for loop
int l_for = 0;
// Output tac file
ofstream fo;

int main(int argc, char **argv) {    
    printf("Inside main\n");
    FILE *fp = fopen(argv[1], "r");
    yyin = fp;

    fo.open("tac.txt");
    yyparse();
    printf("Quadruples Generated:\n");
    printQuadraples();
    // Run optimizations
    printf("After Optimization:\n");
    //printf("Constant Propagation:\n");
    //constantPropagation(quadlen, q);
    printf("Constant Folding:\n");
    constantFolding(q);
    printf("Copy Propagation:\n");
    copyPropagation(q);
    printf("Dead Code Elimination:\n");
    DCE(q);
    printQuadraples();
    fo.close();
    return 0;
}

// Quadruples Stack Functions
void push() {
    top++;
    sprintf(st[top], "%s", q[quadlen].res);
}

void pushi(char *i) {
    top++;
    strcpy(st[top], i);
}

void pusha() {
    top++;
    strcpy(st[top], "&");
}

void pushx() {
    top++;
    sprintf(st[top], "*%s", q[quadlen].res);
}

void pushab() {
    top++;
    sprintf(st[top], "&%s", q[quadlen].res);
}

// Print the quadruples generated
void printQuadraples() {
    for (int i = 0; i < quadlen; i++) {
        printf("%s, %s, %s, %s\n", q[i].op, q[i].arg1, q[i].arg2, q[i].res);
    }
}

// Code generation functions

void codegen() {
    quadlen++;
    sprintf(q[quadlen].op, "%s", st[top - 2]);
    sprintf(q[quadlen].arg1, "%s", st[top - 1]);
    sprintf(q[quadlen].arg2, "%s", st[top]);
    sprintf(q[quadlen].res, "%s", temp);
    push();
    top -= 2;
}

void codegen_assign() {
    quadlen++;
    sprintf(q[quadlen].op, "=");
    sprintf(q[quadlen].arg1, "%s", st[top - 1]);
    sprintf(q[quadlen].arg2, "");
    sprintf(q[quadlen].res, "%s", st[top]);
    top -= 2;
}

void codegen_incdec(int o) {
    quadlen++;
    if (o == 1) {
        sprintf(q[quadlen].op, "++");
    } else {
        sprintf(q[quadlen].op, "--");
    }
    sprintf(q[quadlen].arg1, "%s", st[top]);
    sprintf(q[quadlen].arg2, "");
    sprintf(q[quadlen].res, "%s", st[top]);
    top--;
}

void for1() {
    ltop++;
    sprintf(q[quadlen].op, "label");
    sprintf(q[quadlen].arg1, " ");
    sprintf(q[quadlen].arg2, " ");
    sprintf(q[quadlen].res, "l%d", ltop);
    label[lnum++] = ltop;
    l_for = ltop;
    quadlen++;
}

void for2() {
    quadlen++;
    sprintf(q[quadlen].op, "ifFalse");
    sprintf(q[quadlen].arg1, "%s", st[top]);
    sprintf(q[quadlen].arg2, " ");
    sprintf(q[quadlen].res, "l%d", label[lnum - 1]);
    top--;
}

void for3() {
    quadlen++;
    sprintf(q[quadlen].op, "goto");
    sprintf(q[quadlen].arg1, " ");
    sprintf(q[quadlen].arg2, " ");
    sprintf(q[quadlen].res, "l%d", l_for);
}

void for4() {
    quadlen++;
    sprintf(q[quadlen].op, "label");
    sprintf(q[quadlen].arg1, " ");
    sprintf(q[quadlen].arg2, " ");
    sprintf(q[quadlen].res, "l%d", label[lnum - 1]);
    ltop--;
}

// Optimization functions

int checkForDigits(char *ch)
{
    if(!ch) return 0;
    while(*ch)
    {
        if(isdigit(*ch++)==0)
        {
          return 0;
        }
        return 1;
    }
}

char* compute(char *x, char *y, char *op)
{
    char* res;
    //convert x and y to integers
    int xx=atoi(x);
    int yy=atoi(y);
    int result = 0;
    switch(*op)
    {
      case '+':
        result = xx+yy;
        break;
      case '-':
        result = xx-yy;
        break;
      case '*':
        result = xx*yy;
        break;
      case '/':
        result = xx/yy;
        break;
      case '%':
        result = xx%yy;
        break;
      case '>':
        res= strdup((xx>yy)?"true":"false");
        return res;
      case '<':
        res= strdup((xx<yy)?"true":"false");
        return res;
      default:
        if(strcmp(op,"==")) return (xx==yy)?(char *)"true":(char *)"false";
        else if(strcmp(op,">=")) return (xx>=yy)?(char *)"true":(char *)"false";
        else if(strcmp(op,"!=")) return (xx!=yy)?(char *)"true":(char *)"false";
        else if(strcmp(op,"<=")) return (xx<=yy)?(char *)"true":(char *)"false";
    }
    return (char*)to_string(result).c_str();
}

// Check if a variable is a constant
int isConstant(char *arg) {
    if (isdigit(arg[0]) || (arg[0] == '-' && isdigit(arg[1]))) {
        return 1;
    }
    return 0;
}

// Replace variable with its constant value in quadruples
void replaceWithConstant(char *var, char *constant, quad arr[100]) {
    for (int i = 0; i < quadlen; i++) {
        if (strcmp(arr[i].arg1, var) == 0) {
            strcpy(arr[i].arg1, constant);
        }
        if (strcmp(arr[i].arg2, var) == 0) {
            strcpy(arr[i].arg2, constant);
        }
    }
}

// Constant Propagation
void constantPropagation(quad arr[100]) {
    for (int i = 0; i < quadlen; i++) {
        if (strcmp(arr[i].op, "=") == 0 && isConstant(arr[i].arg1)) {
            replaceWithConstant(arr[i].res, arr[i].arg1, arr);
        }
    }
}

// Constant Folding
void constantFolding(quad arr[100]) {
    for (int i = 0; i < quadlen; i++) {
        if (isConstant(arr[i].arg1) && isConstant(arr[i].arg2)) {
            int a = atoi(arr[i].arg1);
            int b = atoi(arr[i].arg2);
            int result;
            if (strcmp(arr[i].op, "+") == 0) {
                result = a + b;
            } else if (strcmp(arr[i].op, "-") == 0) {
                result = a - b;
            } else if (strcmp(arr[i].op, "*") == 0) {
                result = a * b;
            } else if (strcmp(arr[i].op, "/") == 0) {
                if (b != 0) {
                    result = a / b;
                } else {
                    // Division by zero, can't fold
                    continue;
                }
            }
            char constant[10];
            sprintf(constant, "%d", result);
            strcpy(arr[i].op, "=");
            strcpy(arr[i].arg1, constant);
            strcpy(arr[i].arg2, "");
        }
    }
}

// Copy Propagation
void copyPropagation(quad arr[100]) {
    for (int i = 0; i < quadlen; i++) {
        if (strcmp(arr[i].op, "=") == 0 && !isConstant(arr[i].arg1) && isConstant(arr[i].arg2)) {
            replaceWithConstant(arr[i].res, arr[i].arg2, arr);
        }
    }
}

// Dead Code Elimination
void DCE(quad arr[100]) {
    int used[100] = {0}; // Track used quadruples
    for (int i = quadlen - 1; i >= 0; i--) {
        if (strcmp(arr[i].op, "=") == 0) {
            if (isConstant(arr[i].res) || used[i]) {
                continue;
            }
            used[i] = 1;
            for (int j = i - 1; j >= 0; j--) {
                if (strcmp(arr[j].arg1, arr[i].res) == 0 || strcmp(arr[j].arg2, arr[i].res) == 0) {
                    used[j] = 1;
                }
            }
        }
    }
    int new_quadlen = 0;
    for (int i = 0; i < quadlen; i++) {
        if (used[i]) {
            arr[new_quadlen++] = arr[i];
        }
    }
    quadlen = new_quadlen;
}
