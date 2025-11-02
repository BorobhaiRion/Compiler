#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    int choice;

    while (true)
    {
        cout << "\n=== MENU ===\n";
        cout << "1. Check if Number\n";
        cout << "2. Find Operators\n";
        cout << "3. Detect Comment\n";
        cout << "4. Validate Identifier\n";
        cout << "5. Find Average\n";
        cout << "6. Find Max & Min\n";
        cout << "7. Concatenate Names\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << (isNum() ? "It's a number." : "Not a number.") << endl;
            break;
        case 2:
            isOperator();
            break;
        case 3:
            comment();
            break;
        case 4:
            identifier();
            break;
        case 5:
            avg();
            break;
        case 6:
            maxMin();
            break;
        case 7:
            namesConcat();
            break;
        case 8:
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
}
