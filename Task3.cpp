#include <iostream>
using namespace std;
main()
{
    int size, count = 0;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    int arr2[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> arr[idx];
    }
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            arr2[count] = arr[i];
            count++;
        }
    }
    if (count != 0)
    {
        cout << "[";
        for (int idx = 0; idx < count; idx++)
        {
            cout << arr2[idx];
            if (idx < count - 1)
            {
                cout << ",";
            }
        }
        cout << "]";
    }
    else
        cout << "No such number exists.";
}