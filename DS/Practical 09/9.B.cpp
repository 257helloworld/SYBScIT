/* Write a program to implement selection sort */
#include<iostream>
using namespace std;
int main(){
    cout << "---------Selection Sort---------";
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

    //Logic for select sort
    int min_idx;
    for(int i = 1; i < s; i++){
        min_idx = i;
        for(int j = i+1; j <= s; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            float temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    //Printing sorted array
    cout << "Array Elements before sort: ";
    for(int i = 1; i <= s; i++){
            cout << arr[i] << " ";
        }
    cout << "\n";
}