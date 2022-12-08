// Workshop10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include <vector>
#include "Cow.h"
#include "Sheep.h"
#include "Frisian.h"

using namespace std;

int main()
{
    // init the container
    vector<Animal*> container;
    bool finished = false;

    // while loop to ask user which animal
    while (!finished){
        string str;
        int amount = 0;

        cout << "Input the animal: C(ow), F(risian), S(heep) or E(nd)" << endl;
        cin >> str;
        Animal* aP = nullptr;

        // This ensures only one letter is taken in as an input
        char entry = str[0];

        // use a switch to check which char is submitted, 
        // and a default in case a unwanted/unsuspected character is submitted.
        // Using 'break;' to prevent it continuing through the cases.
        switch (entry) {
        case 'C':
            cout << "How many would you like?" << endl;
            cin >> amount;
            if (amount == 0) {
                cout << "Incorrect input must be integer!!!" << endl;
                return 0;
            }
            for (int i = 0; i < amount; i++) {
                aP = new Cow();
                container.push_back(aP);
            }
            break;
        case 'F':
            cout << "How many would you like?" << endl;
            cin >> amount;
            if (amount == 0) {
                cout << "Incorrect input must be integer!!!" << endl;
                return 0;
            }
            for (int i = 0; i < amount; i++) {
                aP = new Frisian();
                container.push_back(aP);
            }
            break;
        case 'S':
            cout << "How many would you like?" << endl;
            cin >> amount;
            if (amount == 0) {
                cout << "Incorrect input must be integer!!!" << endl;
                return 0;
            }
            for (int i = 0; i < amount; i++) {
                aP = new Sheep();
                container.push_back(aP);
            }
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
        delete container[a];
    }

    return 0;
}
