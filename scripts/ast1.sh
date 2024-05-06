cd ../AST
make
printf "\n Click enter to proceed to Tests"
read option
printf "\n-----------TEST 1 : Abstract Syntax Tree------------\n"
./gocompiler ../test/test1_ast.go
