/*Write a C++ program to delete an element from an array.*/

#include <iostream>
using namespace std;

int main()
{
    int n, remove, count = 0;
    cout << "Input the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Input the values: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number you want to remove: ";
    cin >> remove;

    for (int i = 0; i < n; i++)
    {
        if (arr[i + count] == remove)
        {
            count++;
        }
        if (count > 0)
        {
            arr[i] = arr[i + count];
        }
    }

    if (count > 0)
    {
        cout << "New array: ";
        for (int i = 0; i < n - count; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "The element " << remove << " is not in the array.";
    }
    return 0;
}