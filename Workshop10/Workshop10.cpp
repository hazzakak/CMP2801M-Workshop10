// Workshop10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include <vector>
#include "Cow.h"
#include "Sheep.h"
#include "Frisian.h"

int main()
{
    vector<Animal*> container;
    bool finished = false;
    while (!finished){
        char entry;
        cout << "Input the animal: C(ow), F(risian), S(heep) or E(nd)" << endl;
        cin >> entry;
        Cow* cow = new Cow();
        Frisian* frs = new Frisian();
        Sheep* shp = new Sheep();
        switch (entry) {
        case 'C':
            container.push_back(cow);
            break;
        case 'F':
            container.push_back(frs);
            break;
        case 'S':
            container.push_back(shp);
            break;
        default:
            finished = true;
            break;
        }
    }

    for (int a = 0; a < container.size(); a++)
    {
        container[a]->speak();
    }
    return 0;
}
