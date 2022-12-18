/* Write a program to implement the concept of Queue with Push(insert),Pop(delete),Display & Exit operations using Array */
#include<iostream>
#include<stdlib.h>
using namespace std;
class Queue{
    int arr[5];
    int Rear, Front;
    public:
    Queue(){
        Rear = -1;
        Front = -1;
    }
    void Insert(int x){
        if(Rear < 2){
            arr[++Rear] = x;
            cout << "Inserted " << x << " in the Queue";
        }
        else{
            cout << "\nQueue overflow";
            return;
        }

    }
    void Delete()
    {
        if(Front == Rear){
            cout << "\nQueue Underflow";
            return;
        }
        else{
            Front = Front + 1;
            cout << "Deleted " << arr[Front] << " from Queue";
        }
    }
    void Display(){
        if(Rear == Front){
            cout << "\nQueue is empty";
        }
        else{
           int j = Front + 1;
            cout << arr[j];
            j++;
            for(int i = j; i <= Rear; i++){
            cout << ", " << arr[i];
            }
        }

    }
};
int main(){
    cout << "------------Queue------------";
    int ch;
    Queue q;
    cout << "\n1.Insert\n2.Delete\n3.Display\n4.Exit. ";
    while(1){
        cout << "\n\nEnter your choice: ";
        cin >> ch;
        switch(ch){
            case 1:
                cout << "Enter an element: ";
                cin >> ch;
                q.Insert(ch);
                break;
            case 2:
                q.Delete();
                break;
            case 3:
                q.Display();
                break;
            case 4:
                exit(0);
        }
    }
}
