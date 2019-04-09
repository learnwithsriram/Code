// This is an example code written by Sriram Srinivasan to demonstrate Pointers concept
// www.learnwithsriram.com

#include "pch.h"
#include <iostream>

int main()
{
	//When a variable is declared, a memory location to hold that variable is allocated by the system.
	//Here memory enough to hold an integer variable gets allocated
	int someInt = 12;
	int someIntY = 7;

	/* A pointer is another type of a variable that gives us the power to work with the memory allocated for that variable.
	 Here we have declared a pointer variable that is of integer type. 
	 When we assign a variable with &symbol in the beginning it means we are assigning the memory address of that variable
	 to the pointer variable. Now both these variables point to the same memory location. 
	 someInt and intPointer will have the same value of 12. 
	 Pointers are not a complicated topic, but, very powerful. One needs to assume the responsibility to allocate, use and deallocate such memory
	 which if we don't do will hog the system with memory leaks. */
	int *intPointer = &someInt;
	int *intPointerNext = &someIntY;

    std::cout << "SomeInt is: " << someInt << "\n";
	std::cout << "SomeIntY is:  " << someIntY << "\n";

	std::cout << "IntPointer:  " << *intPointer << "\n";
    std::cout << "IntPointerNext:  " << *intPointerNext << "\n";

}

 
