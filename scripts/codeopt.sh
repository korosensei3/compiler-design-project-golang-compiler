cd ../CodeOptimization
make
printf "\n Click enter to proceed to Test"
read option

printf "\n---------VARIABLE DECLARATIONS------------\n"
./gocompiler ../test/test1_opt.go

printf "\n Click enter to proceed to Test 2"
read option
printf "\n----------- FOR LOOP------------\n"
./gocompiler ../test/test3_for.go
