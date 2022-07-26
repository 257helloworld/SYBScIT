/* Write a program to store elements in one dimensional array & print the elements in reverse order */
#include<iostream>
using namespace std;
int main()
{
    int s;
    cout << "----------Reverse Order----------" << endl;
    cout << "\nEnter size of Array: ";
    cin >> s;
    float arr[s];
    cout << "\n";
    
    //Taking input for array elements
    for (int i = 1; i <= s; i++)
    {
        cout << "Enter Array element " << i << ": ";
        cin >> arr[i];
    }
    
    //Printing Array
    cout << "\nArray: ";
    for (int i = 1; i <= s; i++)
    {
        if(i == 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << ", " << arr[i];
        }
    }

    //Logic for reversing order of Array
    int i = 1, j = s, temp = 0;
    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
    //Printing Reverse Array
    cout << "\nReverse Array: ";
    for (int i = 1; i <= s; i++)
    {
        if(i == 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << ", " << arr[i];
        }
    }
    cout << endl;
    
}