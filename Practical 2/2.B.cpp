/* Write a program to store elements in 1-D Array and perform Binary Search */
#include<iostream>
using namespace std;
int main()
{
    cout << "--------Binary Search--------";
    int s;
    cout << "\n\nEnter size of Array: ";
    cin >> s;
    cout << "\n";
    //Taking input for array elements
    int arr[s];
    for(int i = 0; i < s; i++)
    {
        cout << "Enter array element " << i+1 << ": ";
        cin >> arr[i];
    }


    //Printing Array
    cout << "\nArray: ";
    for(int i = 0; i < s; i++)
    {
        if(i == 0)
            cout << arr[i];
        else
            cout << ", " << arr[i];
    }

    //Logic for searching the element
    int search;
    cout << "\n\nEnter search element: ";
    cin >> search;

    int start = 1,end = s, mid, f;
    while(start <= end)
    {
        mid = int((start+end)/2);
        if(arr[mid] == search){
            cout << search << " found at position " << mid+1;
            f = 1;
        }
        if(arr[mid] < search)
            start = mid + 1;
        else
            end = mid - 1;
    }
    if(f != 1)
    {
        cout << "\nElement not found in Array"; 
    }
    cout << "\n";
}