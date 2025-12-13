#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include "functions.h"
using namespace std;

void comment(ifstream &inputFile)
{
    string input;
    
    // Ignore the rest of the current line to switch from formatted (>>) to unformatted (getline) input
    inputFile.ignore(numeric_limits<streamsize>::max(), '\n'); 

    getline(inputFile, input);
    cout << "Input: " << input << endl;

    if (input.size() >= 2 && input.substr(0, 2) == "//")
    {
        cout << "It's a single-line comment." << endl;
    }
    else if (input.size() >= 4 &&
             input.substr(0, 2) == "/*" &&
             input.substr(input.length() - 2, 2) == "*/")
    {
        cout << "It's a multi-line comment." << endl;
    }
    else
    {
        cout << "It's not a comment." << endl;
    }
}
