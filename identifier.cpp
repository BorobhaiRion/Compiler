#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
using namespace std;

void identifier(ifstream &inputFile)
{
    string s;
    inputFile >> s;
    cout << "Input: " << s << endl;

    if (s.empty())
    {
        cout << "Invalid identifier detected." << endl;
        return;
    }

    // Check first character
    if (!((s[0] >= 'A' && s[0] <= 'Z') ||
          (s[0] >= 'a' && s[0] <= 'z') ||
          s[0] == '_'))
    {
        cout << "Invalid identifier detected." << endl;
        return;
    }

    // Reserved keywords
    string keywords[] = {"int", "if", "cout", "endl", "else", "for", "while", "return", "float", "double"};
    int keywordCount = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < keywordCount; i++)
    {
        if (s == keywords[i])
        {
            cout << "Invalid identifier: it's a reserved keyword." << endl;
            return;
        }
    }

    // Remaining characters
    for (int i = 1; i < s.length(); i++)
    {
        if (!((s[i] >= 'A' && s[i] <= 'Z') ||
              (s[i] >= 'a' && s[i] <= 'z') ||
              (s[i] >= '0' && s[i] <= '9') ||
              s[i] == '_'))
        {
            cout << "Invalid identifier detected." << endl;
            return;
        }
    }

    cout << "Valid identifier detected." << endl;
}
