#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
using namespace std;

bool isNum (ifstream &inputFile)
{
    string c;
    inputFile >> c;
    cout << "Input: " << c << endl;
    for (int i = 0; i < c.length(); i++) {
        if (c[i] >= '0' && c[i] <= '9') continue;
        else return false;
    }
    return true;
}
