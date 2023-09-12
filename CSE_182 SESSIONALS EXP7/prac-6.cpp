/*Write a C++ program to count the frequency of each element in an array.*/

/*
The frequency of an element in an array is the number of times that element
appears in the array. For example, if the array is [1, 2, 3, 1, 2], then
the frequency of the element 1 is 2.*/

#include <iostream>
//#include <algorithm>
using namespace std;

int main()
{
    int n, temp, count, i, j, element;
    cout << "Input the size of array: ";
    cin >> n;
    int arr[n + 1];
    cout << "Input the values: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //sort(arr, arr + n);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    element = arr[0];
    count = 0;
    for (i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            count++;
        }
        else
        {
            cout << "Element " << element << " frequency " << count << endl;
            count = 1;
            element = arr[i];
        }
    }
    cout << "Element " << element << " frequency " << count << endl;

    return 0;
}