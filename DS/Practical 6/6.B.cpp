/*6B-Write a program to convert an infix expression to postfix conversion */

#include <iostream>
#include <ctype.h>
using namespace std;

char arr[50];
int top = -1;
void push(char x)
{
    arr[++top] = x;
}
char pop()
{
    if (top == -1)
        return -1;
    else
        return arr[top--];
}
int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}
void task()
{
    char exp[50];
    char *e, x;
    cout << "\nEnter the infix expression: ";
    cin >> exp;
    e = exp;
    cout << "Postfix expression: ";
    while (*e != '\0') // \0 - End of the string
    {
        if (isalnum(*e))
            cout << *e;
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
                cout << x;
        }
        else
        {
            while (priority(arr[top]) >= priority(*e))
                cout << pop();
            push(*e);
        }
        e++;
    }
    while (top != -1)
    {
        cout << pop();
    }
    cout << "\n";
}
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        task();
    }
    
}