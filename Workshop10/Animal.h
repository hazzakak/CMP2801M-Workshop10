#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	// Constructor for animal
	Animal(); 
	virtual ~Animal();

	// using virtual as it's being overriden.
	virtual void speak(void) = 0;
};

