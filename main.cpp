#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;

int main()
{
    ifstream inputFile("input.txt");

    if (!inputFile.is_open())
    {
        cerr << "Error opening input.txt" << endl;  // used cerr for error output
        return 1; // this ends main() immidiately as return 0 says pprogramme runned successfully
    }

    cout << "\n--- Checking for Number ---\n";
    cout << (isNum(inputFile) ? "It's a number." : "Not a number.") << endl;

    cout << "\n--- Finding Operators ---\n";
    isOperator(inputFile);

    cout << "\n--- Detecting Comment ---\n";
    comment(inputFile);

    cout << "\n--- Validating Identifier ---\n";
    identifier(inputFile);

    cout << "\n--- Finding Average ---\n";
    avg(inputFile);

    cout << "\n--- Finding Max & Min ---\n";
    maxMin(inputFile);

    cout << "\n--- Concatenating Names ---\n";
    namesConcat(inputFile);

    inputFile.close();
    return 0;
}
