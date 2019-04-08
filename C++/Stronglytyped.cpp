// Stronglytyped.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	//C++ is a strongly typed language. This means
	//When you delcare a variable you need to mention it's type
	//Then that variable will be only of that type

	int i = 5; //All variables in C++ should be initialised. Else, "undefined" will be the value and your program will not work.

	std::cout << "Number is " << i;

	//A qualifier can also be added to a type. Once declared that qualifier will become part of that variable. 

	const int j = 10;
	;
	std::cout << "Number is " << j;

	//trying to change a const integer value, will result in an compile time error.
	j = 20;

}
