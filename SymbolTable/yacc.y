%{
#include <bits/stdc++.h>
#include "y.tab.h"
using namespace std;
#include "SymbolTable.h"
int yylex();
extern FILE *yyin;
extern int yylineno;
extern int yycolno;
//Error Handling
void yyerror (const char *s) {fprintf (stderr, "\033[0;31m Line:%d | Column: %d %s\n\033[0m\n",yylineno, yycolno, s);exit(0);} 

//Symbol Table Structure
  char x[10];

//To check if number
// Returns true if s is a number else false 
bool isNumber(string s) 
{ 
    for (int i = 0; i < s.length(); i++) 
        if (isdigit(s[i]) == false) 
            return false; 
  
    return true; 
} 


%}

%start StartFile

%error-verbose

%union {
     char *sval;
	 int nval;
}

//To access yyloc
%locations

%token <sval> T_PACKAGE T_IMPORT T_FUNC T_BREAK T_CONST T_CONTINUE T_PRINT
%token <sval> T_ELSE T_FOR T_IF T_RETURN T_VAR T_VAR_TYPE
%token <sval> T_BOOL_CONST T_IDENTIFIER T_STRING T_NIL_VAL
%token <sval> T_INCREMENT T_DECREMENT 
%token <sval> T_INTEGER
%token <sval> T_FLOAT

%left <sval> T_ADD T_MINUS T_MULTIPLY T_DIVIDE T_MOD
%right <sval> T_ASSIGN T_NOT
%left <sval> T_LAND T_LOR T_EQL T_NEQ T_LEQ T_GEQ T_SEMICOLON
%left <sval> T_GTR T_LSR T_LEFTPARANTHESES T_RIGHTPARANTHESES T_LEFTBRACE T_RIGHTBRACE T_LEFTBRACKET T_RIGHTBRACKET T_COMMA T_PERIOD

%type <sval> unary_op bin_op math_op assign_op rel_op
%type <sval> Type
%type <sval> Expression Operand BasicLit ExpressionList IdentifierList Declaration
/*
%type StartFile Expression 
%type Block StatementList Statement SimpleStmt 
%type TopLevelDecl TopLevelDeclList
%type FunctionDecl
%type ForStmt
%type ExpressionList 
%type Operand BasicLit IfStmt
%type PackageName ImportDecl ImportDeclList ImportSpecList Declaration
%type bin_op math_op rel_op
%type PrintStmt
*/

%% 

StartFile:
    T_PACKAGE PackageName ImportDeclList TopLevelDeclList {
		lookup($1,@1.last_line,'K',NULL,NULL);
	};

Block:
	T_LEFTBRACE StatementList T_RIGHTBRACE {
	}
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
	T_IDENTIFIER assign_op Expression {
		search_id($1,@1.last_line,0);lookup($2,@2.last_line,'O',NULL,NULL);update($1,@1.last_line,$3);
		type_check($1,$3,yylineno);
	}
	| Expression T_INCREMENT {
		int temp = get_val($1,@1.last_line);
		search_id($1,@1.last_line,0);lookup($2,@2.last_line,'O',NULL,NULL);update($1,@1.last_line,(char *)to_string(temp+1).c_str());
	}
	| Expression T_DECREMENT {
		int temp = get_val($1,@1.last_line);search_id($1,@1.last_line,0);lookup($2,@2.last_line,'O',NULL,NULL);update($1,@1.last_line,(char *)to_string(temp-1).c_str());
	} 
	| ExpressionList assign_op ExpressionList {
		// b,c = 2,3
	}
	| /*empty*/{};
	
Declaration:
	T_CONST T_IDENTIFIER Type T_ASSIGN Expression {lookup($1,@1.last_line,'K',NULL,NULL);}
	| T_CONST T_IDENTIFIER Type {lookup($1,@1.last_line,'K',NULL,NULL);}
	| T_VAR IdentifierList Type T_ASSIGN ExpressionList 
	{	search_id($2,@1.last_line,1);
		lookup($2,@1.last_line,'I',NULL,$3);lookup($1,@1.last_line,'K',NULL,NULL);
		update($2,@2.last_line,$5);
		type_check($2,$5,yylineno);
	}
	| T_VAR IdentifierList Type { search_id($2,@1.last_line,1);lookup($2,@1.last_line,'I',NULL,$3);lookup($2,@2.last_line,'K',NULL,NULL);};

PrintStmt:
	T_PRINT T_LEFTPARANTHESES T_STRING T_RIGHTPARANTHESES {
		lookup($1,@1.last_line,'K',NULL,NULL);
	};

FunctionDecl:
	T_FUNC T_IDENTIFIER T_LEFTPARANTHESES T_RIGHTPARANTHESES Block {
		lookup($1,@1.last_line,'K',NULL,NULL);
	};

IdentifierList:
	IdentifierList T_COMMA T_IDENTIFIER {;} 
	| T_IDENTIFIER {$$=$1;};

TopLevelDeclList:
    TopLevelDeclList TopLevelDecl  {}
	| TopLevelDeclList T_SEMICOLON TopLevelDecl  {}
    | TopLevelDecl  {};

TopLevelDecl:
	Declaration {}	
	| FunctionDecl {};

Type:
	T_VAR_TYPE {
		$$=$1;
		lookup($1,@1.last_line,'K',NULL,NULL);
	};

Operand:
	BasicLit {$$=$1;
	//2
	}
	| T_IDENTIFIER {$$=$1;
	//a
	}
	| T_LEFTPARANTHESES Expression T_RIGHTPARANTHESES {};

IfStmt:
	T_IF Expression Block {
		lookup($1,@1.last_line,'K',NULL,NULL);
	}
	| T_IF Expression Block T_ELSE IfStmt {
		lookup($1,@1.last_line,'K',NULL,NULL);
		lookup($4,@4.last_line,'K',NULL,NULL);
	}
	| T_IF Expression Block T_ELSE  Block {
		lookup($1,@1.last_line,'K',NULL,NULL);
		lookup($4,@4.last_line,'K',NULL,NULL);
	};

ForStmt: 
  T_FOR SimpleStmt T_SEMICOLON Expression T_SEMICOLON SimpleStmt Block {
	  lookup($1,@1.last_line,'K',NULL,NULL);
  };

ExpressionList:
	ExpressionList T_COMMA Expression {}
	| Expression {$$=$1;};

BasicLit:
	T_INTEGER {lookup($1,@1.last_line,'C',NULL,"int"); $$=$1;}
	| T_FLOAT {lookup($1,@1.last_line,'C',NULL,"float"); $$=$1;}
	| T_STRING {lookup($1,@1.last_line,'C',NULL,"string"); $$=$1;}
	| T_BOOL_CONST {lookup($1,@1.last_line,'C',NULL,"bool");$$=$1;
	};

Expression:
	Expression math_op Expression 
	{	//Won't work for identifiers
		lookup($2,@2.last_line,'O',NULL,NULL);
		int a = isNumber($1)?atoi($1):get_val($1,@1.last_line);
		int b = isNumber($3)?atoi($3):get_val($3,@3.last_line);
		if(!strcmp($2,"+")){sprintf($$,"%d",a+b);}
		if(!strcmp($2,"*")){sprintf($$,"%d",a*b);}
		if(!strcmp($2,"/")){sprintf($$,"%d",a/b);}
		if(!strcmp($2,"-")){sprintf($$,"%d",a-b);}
		if(!strcmp($2,"%")){sprintf($$,"%d",a%b);}
	}
	| Expression rel_op Expression {
		//Only binary expressions
		lookup($2,@2.last_line,'O',NULL,NULL);
		int a = isNumber($1)?atoi($1):get_val($1,@1.last_line);
		int b = isNumber($3)?atoi($3):get_val($3,@3.last_line);
		if(!strcmp($2,"==")){ bool e = (a==b);$$ = e?(char *)"true":(char *)"false";}
		if(!strcmp($2,"!=")){ bool e = (a!=b);$$ = e?(char *)"true":(char *)"false";}
		if(!strcmp($2,"<")){ bool e = (a<b);$$ = e?(char *)"true":(char *)"false";}
		if(!strcmp($2,"<=")){ bool e = (a<=b);$$ = e?(char *)"true":(char *)"false";}
		if(!strcmp($2,">")){ bool e = (a>b);$$ = e?(char *)"true":(char *)"false";}
		if(!strcmp($2,">=")){ bool e = (a>=b);$$ = e?(char *)"true":(char *)"false";}
	}
	| Expression bin_op Expression {
		lookup($2,@2.last_line,'O',NULL,NULL);
		//For logical operators
	}
	| unary_op Operand {
		lookup($1,@1.last_line,'O',NULL,NULL);
		}
	| Operand { $$=$1; };

bin_op:
	T_LOR {$$=$1;}
	| T_LAND {$$=$1;};

rel_op:
	T_EQL {$$=$1;}
	| T_NEQ {$$=$1;}
	| T_LSR {$$=$1;}
	| T_LEQ {$$=$1;}
	| T_GTR {$$=$1;}
	| T_GEQ {$$=$1;};

math_op:
	T_ADD {$$=$1;}
	| T_MINUS {$$=$1;}
	| T_MULTIPLY {$$=$1;}
	| T_DIVIDE {$$=$1;}
	| T_MOD {$$=$1;};

unary_op:
	T_ADD {$$=$1;}
	| T_MINUS {$$=$1;}
	| T_NOT {$$=$1;};

assign_op:
	T_ASSIGN {$$=$1;};

PackageName:
	T_IDENTIFIER {lookup($1,@1.last_line,'I',NULL,NULL);}
	| T_STRING {}
	| T_STRING T_SEMICOLON {};
	
//Can be list of imports, single import or no imports. Imports from local paths not accounted for.

ImportDeclList:
      ImportDeclList ImportDecl {}
    | ImportDecl {}
    | /*empty*/ {};

ImportDecl:
	T_IMPORT PackageName {
		lookup($1,@1.last_line,'K',NULL,NULL);
	}
	| T_IMPORT T_LEFTPARANTHESES ImportSpecList T_RIGHTPARANTHESES {
		lookup($1,@1.last_line,'K',NULL,NULL);
	};

ImportSpecList:
	ImportSpecList PackageName {}
	| PackageName {};

%%

int main (int argc, char** argv) {	
	printf("Inside main\n");
	FILE * fp= fopen(argv[1], "r");
	yyin = fp;
	printf("Read the input file, continue with Lexing and Parsing\n");
	printf("Performing Lexical analysis......\n\n");
	yyparse ( );
	printf("\n\033[0;32mParsing completed.\033[0m\n\n");
	printf("Symbol Table after Lexical Analysis: \n");
	Display();
	return 0;
}

