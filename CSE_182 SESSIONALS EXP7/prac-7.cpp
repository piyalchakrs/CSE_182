/*Write a C++ program to find the reverse of an array.*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Input the size of array: ";
    cin >> n;
    int arr[n], rev[n];
    cout << "Input the values: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        rev[i] = arr[n - i - 1];
    }
    cout << "Reverse array:";
    for (i = 0; i < n; i++)
    {
        cout << " " << rev[i];
    }

    return 0;
}