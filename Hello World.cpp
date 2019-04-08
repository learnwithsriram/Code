// Hello World.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h" // Precompiled headers. So your project can compile fast. 
#include <iostream> // Required for input / output functions

int main() // this is where our program execution starts
{
    
	/* std::cout is equivalent to System.out.println in Java. 
	   This prints what we pass as input to the standard console. 
	   In this program, you will see Windows commandline opens up to display
	   the message "Hello World"

	   The \n denotes newline. means after printing "Hello World" move the cursor'
	   to the next line.

	   The "<<" is the one actually passes our input to the standard output. 
	*/
	std::cout << "Hello World!\n";  
}

