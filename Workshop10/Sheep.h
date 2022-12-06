#pragma once
#include "Animal.h"

class Sheep :
    // using virtual as Animal is being overriden.
    virtual public Animal
{
public:
    Sheep() {}
    // using virtual as it's being overriden.
    virtual void speak(void) { cout << "Sheep says: \t\tbaa!" << endl; };
};