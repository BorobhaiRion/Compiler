#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

void comment()
{
    string input;
    cout << "Enter a line: ";
    cin.ignore();
    getline(cin, input);

    if (input.substr(0, 2) == "//")
    {
        cout << "It's a single-line comment." << endl;
    }
    else if (input.substr(0, 2) == "/*" && input.substr(input.length() - 2, 2) == "*/")
    {
        cout << "It's a multi-line comment." << endl;
    }
    else
    {
        cout << "It's not a comment." << endl;
    }
}
