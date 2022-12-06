#pragma once
#include "Animal.h"

class Sheep :
    virtual public Animal
{
public:
    Sheep() {}
    virtual void speak(void) { cout << "Sheep says: \t\tbaa!" << endl; };
};