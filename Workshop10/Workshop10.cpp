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
    // init the container
    vector<Animal*> container;
    bool finished = false;

    // while loop to ask user which animal
    while (!finished){
        string str;

        cout << "Input the animal: C(ow), F(risian), S(heep) or E(nd)" << endl;
        cin >> str;

        // This ensures only one letter is taken in as an input
        char entry = str[0];

        // init the animals to push to container
        Cow* cow = new Cow();
        Frisian* frs = new Frisian();
        Sheep* shp = new Sheep();

        // use a switch to check which char is submitted, 
        // and a default in case a unwanted/unsuspected character is submitted.
        // Using 'break;' to prevent it continuing through the cases.
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
        case 'E':
            finished = true;
            break;
        default:
            cout << "Incorrect input must be C, F, S or E!!!" << endl;
            break;
        }
    }

    for (int a = 0; a < container.size(); a++)
    {
        // using -> as we're using pointers.
        container[a]->speak();
    }
    return 0;
}
