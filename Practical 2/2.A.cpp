/* Write a program to store elements in one dimensional array & perform linear search  */
#include<iostream>
using namespace std;
int main()
{
    int s;
    cout << "----------Linear Search----------" << endl;
    cout << "\nEnter size of Array: ";
    cin >> s;
    float arr[s];
    cout << "\n";
    
    //Taking input for Array elements
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

    //Taking input for search element
    int search;
    cout << "\n\nEnter element to search: ";
    cin >> search;

    //Searching in array
    int flag;
    for (int i = 1; i <= s ; i++)
    {
        if(arr[i] == search)
        {  
            cout << "\n" << search << " found at position " << i << endl;
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag == 0)
    {
        cout << "\n" << search << " not found in array.";
    }
    cout << endl;
}