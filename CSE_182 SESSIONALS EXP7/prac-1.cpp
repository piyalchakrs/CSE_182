#include <iostream>
using namespace std;

int main()
{
    int n, max = INT32_MIN, min = INT32_MAX;
    cout << "The number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The minimum element: " << min << endl
         << "The maximum element: " << max;

    return 0;
}
