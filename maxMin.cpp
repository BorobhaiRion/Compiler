#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;

void maxMin(std::ifstream &inputFile)
{
    int n;
    inputFile >> n;
    cout << "Input array size: " << n << endl;

    int arr[n];
    cout << "Input array elements: ";
    for (int i = 0; i < n; i++)
    {
        inputFile >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;
}
