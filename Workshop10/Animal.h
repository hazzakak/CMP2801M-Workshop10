#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	// Constructor for animal
	Animal(); 

	// using virtual as it's being overriden.
	virtual void speak(void);
};

