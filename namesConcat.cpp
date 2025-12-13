#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
using namespace std;

void namesConcat(std::ifstream &inputFile)
{
    string firstName, lastName;

    inputFile >> firstName >> lastName;
    cout << "Input names: " << firstName << " " << lastName << endl;

    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << endl;
}
