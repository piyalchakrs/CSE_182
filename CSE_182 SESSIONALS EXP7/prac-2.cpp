/*Write a C++ program to find the second largest element in an array.*/

#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cout << "Enter the number of element: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"The second largest element "<<arr[n-2];

    return 0;
}