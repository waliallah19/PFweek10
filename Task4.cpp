#include <iostream>
using namespace std;
bool isRepeating(int);
int arr[20];
main()
{
    int size, count = 0,cycle;
    cout << "Enter the size of array: ";
    cin >> size;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> arr[idx];
    }
    cout<<"Enter repeating cycle check value: ";
    cin>>cycle;
    bool a;
    a = isRepeating(cycle);
    if(a==true || cycle > size)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
bool isRepeating(int cycle)
{
    int count=0;
    for(int i=0;i<cycle;i++)
    {
     if(arr[i]==arr[i+cycle])
     {
        count++;
     }   
    }
    if(count == cycle)
    {
        return true;
    }
    else
    {
        return false;
    }
}