#include <iostream>
using namespace std;
int calculation(int);
int arr[20];
main()
{
    int size,count;
    cout << "Enter how many weeks you want to enter: ";
    cin >> size;
    count = calculation(size);
    cout << count;
}
int calculation(int size)
{ 
    int count = 0;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter miles for " << idx + 1 << " week: ";
        cin >> arr[idx];
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
    }
    return count;
}