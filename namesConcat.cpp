#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

void namesConcat()
{
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << endl;
}
