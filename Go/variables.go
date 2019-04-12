package main

import (
	"fmt"
)

func main() {

	//var keyword is used to declarea  variable
	var str = "somestring"
	fmt.Println(str)

	//multiple variables can be declared in a statement
	var someint, anotherint int = 1, 2
	fmt.Println(someint, anotherint)

	// a boolean variable
	var thisisboolean = true
	fmt.Println(thisisboolean)

	//A default value of zero will be provided to the int
	var notinitialized int
	fmt.Println(notinitialized)

	somestr := "Go is Fun"
	fmt.Println(somestr)
}
