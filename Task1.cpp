#include <iostream>
using namespace std;
main()
{
    int size, count = 0;
    char letter;
    cout<<"Enter the number of words you will enter: ";
    cin>>size;
    string arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter word " << idx + 1 << ": ";
        cin >> arr[idx];
    }
    cout << "Enter the letter you want to search: ";
    cin >> letter;
    string temp;
    for (int idx = 0; idx < size; idx++)
    {
        temp = arr[idx];
        int i = 0;
        while (temp[i] != '\0')
        {
            if (temp[i] == letter)
            {
                count++;
                temp[i] = ' ';
            }
            i++;
        }
    }

    cout << letter << " shows up " << count << " times in the data.";
}