/* Write a program to implement the concept of stack with Push, Pop, Display and Exit operations */
#include<iostream>
#define Max 5
using namespace std;
int Stack[Max], Top = -1, val; // Top is NULL
void push(int value)
{
    if(Top == Max - 1){
        cout << "Stack overflow" << endl;
    }
    else{
        Top++;
        Stack[Top] = val;
    }
}
void pop()
{
    if(Top == -1){
        cout << "Stack underflow" << endl;
    }
    else{
        cout << "The popped element is: " << Stack[Top] << endl;
        Top--;
    }
}
void display()
{
    if(Top >= 0){
        cout << "\nStack elements are: ";
        cout << Stack[Top];
        for (int i = Top-1; i >= 0; i--)
        {
            cout << ", "<< Stack[i];
        }
    }
    else{
        cout << "Stack is empty";
    }
}
int main()
{
    int ch;
    cout << "----------Stack----------\n\n";
    cout << "1. Push element in stack" << endl;
    cout << "2. Pop element from stack" << endl;
    cout << "3. Display the elements in stack" << endl;
    cout << "4. Push element in stack" << endl;
    do
    {
        cout << "\nEnter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter value to be pushed: ";
            cin >> val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exit." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter choise between 1 to 4" << endl;
            break;
        }
    } while(ch != 4);
}
