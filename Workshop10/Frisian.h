#pragma once
#include "Cow.h"
class Frisian :
    public Cow
{
public:
    Frisian() {}

    ~Frisian() {
        cout << "Frisian has been destructed" << endl;
    }

    virtual void speak(void) {
        cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;
    }
};

