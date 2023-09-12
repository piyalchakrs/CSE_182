/*Write a C++ program to count the total number of duplicate elements in an array.*/

#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
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
        for (int j = 0; j < i; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
                break;
            }
            
        }
        
    }
    cout<<"Duplicate elements "<<count;
    

    return 0;
}