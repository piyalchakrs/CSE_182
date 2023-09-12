/*Write a C++ program to insert an element into an array.*/

#include <iostream>
using namespace std;

int main()
{
    int n, insert, position;
    cout << "Input the size of array: ";
    cin >> n;
    int arr[n + 1];
    cout << "Input the values: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Choose a position between 1 to " << n<<": ";
    cin >> position;
    cout << "Insert a number: ";
    cin >> insert;

    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position-1] = insert;

    cout << "New array: ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}