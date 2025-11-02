#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

bool isNum ()
{
    string c;
    cin >> c;
    for (int i = 0; i < c.length(); i++) {
        if (c[i] >= '0' && c[i] <= '9') continue;
        else return false;
    }
    return true;
}
