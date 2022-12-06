#pragma once
#include "Animal.h"
class Cow :
    // using virtual as Animal is being overriden.
    virtual public Animal
{
public:
    Cow() {}

    // using virtual as it's being overriden.
    virtual void speak(void) {
        cout << "Cow says: \t\tmoo!" << endl;
    }

};

