#include <iostream>
#include <vector>
#include <string>
#include "functions.h"
using namespace std;

void isOperator() {
    string c;
    cout << "Enter a string: ";
    cin >> c;

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
