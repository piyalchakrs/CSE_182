/*Write a C++ program to print all unique elements in the array.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Input the values: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag;
    cout << "Unique values:";
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << " " << arr[i];
        }
    }

    return 0;
}