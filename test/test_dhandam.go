package main

import "fmt"

func main() {
    // Print even or odd numbers from 1 to 10
    var i int;
    i=0;
    if (i%2) == 0 {
    	i=i+1;
        fmt.Println("even");
    } else 
    {	i=i-1;
        fmt.Println("odd");
    }
}
