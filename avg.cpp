#include <iostream>
#include "functions.h"
using namespace std;

void avg()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    double average = static_cast<double>(sum) / n;
    cout << "Average = " << average << endl;
}
