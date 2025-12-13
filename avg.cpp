#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;

void avg(ifstream &inputFile)
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

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    double average = static_cast<double>(sum) / n;
    cout << "Average = " << average << endl;
}
