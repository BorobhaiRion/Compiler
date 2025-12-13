#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "functions.h"
using namespace std;

void isOperator(ifstream &inputFile) {
    string c;
    inputFile >> c;
    cout << "Input: " << c << endl;

    vector<char> ops;
    for (int i = 0; i < c.length(); i++) {
        if (c[i]=='+' || c[i]=='-' || c[i]=='*' || c[i]=='/' || c[i]=='=' || c[i]=='%') {
            ops.push_back(c[i]);
        }
    }
    for (int i = 0; i < ops.size(); i++) {
        cout << "Operator " << i + 1 << ": " << ops[i] << endl;
    }
}
