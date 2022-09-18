/* Write a program to implement insertion sort */
#include<iostream>
using namespace std;
int main(){
    cout << "---------Bubble Sort---------";
    int s;
    cout << "\nEnter size of array: ";
    cin >> s;

    //Creating array
    float arr[s], temp;

    //Taking user input in array
    cout << "Enter array elements.\n";
    for(int i = 0; i < s; i++){
        cout<< i+1 << ": ";
        cin >> arr[i];
    }

    //Printing unsorted array
    cout << "Array Elements before sort: ";
    for(int i = 0; i < s; i++){
            cout << arr[i] << " ";
        }
    cout << "\n";

    //Logic for select sort 
    int i, key, j; 
    for (i = 1; i < s; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 

    //Printing sorted array
    cout << "Array Elements before sort: ";
    for(int i = 0; i < s; i++){
            cout << arr[i] << " ";
        }
    cout << "\n";
}