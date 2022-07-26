/* Write a program to store elements in one dimensional array & perform sorting in ascending order  */
#include<iostream>
using namespace std;
int main()
{
    int s;
    cout << "----------Ascending Order----------" << endl;
    cout << "\nEnter size of Array: ";
    cin >> s;
    float arr[s];
    cout << "\n";
    
    //Taking input as Array elements
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

    //Sorting Array in Ascending order
    for (int i = 0; i < s; i++)
    {        
        for (int j = i+1; j <= s; j++)
        {
            if (arr[i] > arr[j])
            {
                int t;
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            } 
        }   
    }
    
    //Printing Ascending Array
    cout << "\nAscending Array: ";
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