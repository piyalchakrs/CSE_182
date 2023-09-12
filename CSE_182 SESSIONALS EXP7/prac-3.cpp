/*Write a C++ program to count the total number of even and odd elements in an array.*/

#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    cout << "Input the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Input the values: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even " << even << endl
         << "Odd " << odd;

    return 0;
}