#pragma once
#include "Animal.h"
class Cow :
    virtual public Animal
{
public:
    Cow() {}
    virtual void speak(void) {
        cout << "Cow says: \t\tmoo!" << endl;
    }

};

