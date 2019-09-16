// GitTest3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int superFeature(int a) {
	return a * a;
}

int main()
{
    std::cout << "Hello K-23!\n"; 

	// super call
	std::cout << superFeature(42);
}
