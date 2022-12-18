/* Write a program to implement bubble sort */
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
    for(int i = 1; i <= s; i++){
        cout<< i << ": ";
        cin >> arr[i];
    }

    //Printing unsorted array
    cout << "Array Elements before sort: ";
    for(int i = 1; i <= s; i++){
            cout << arr[i] << " ";
        }
    cout << "\n";

    //Logic for bubble sort
    for(int i = 1; i <= s; i++){
        for(int j = 1; j <= (s-i); j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Printing sorted array
    cout << "Array Elements before sort: ";
    for(int i = 1; i <= s; i++){
            cout << arr[i] << " ";
        }
    cout << "\n";
}