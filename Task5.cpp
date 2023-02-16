#include<iostream>
using namespace std;
main()
{
    int size,total = 0;
    cout<<"How many boxes you want to enter: ";
    cin>>size;
    int arr[size*3];
    for(int i = 0; i<size*3; i = i+3)
    {
        cout<<"Enter length of box: ";
        cin>>arr[i];
        cout<<"Enter length of box: ";
        cin>>arr[i+1];
        cout<<"Enter length of box: ";
        cin>>arr[i+2];
        total = total + (arr[i]*arr[i+1]*arr[i+2]);
    }
    cout<<"Total volume of the boxes is: "<<total<<" meter cube";
}