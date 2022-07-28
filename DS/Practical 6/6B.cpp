/*6B-Write a program to convert an infix expression to postfix conversion */

#include<iostream>
#include<ctype.h>
using namespace std;
char arr[50];
int top=-1;
void push(char x)
{
    arr[++top]=x;

}
char pop()
{
    if(top==-1)
        return -1;
    else
        return arr[top--];
}
int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+' || x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    return 0;
}
int main()
{
    char exp[50];
    char *e,x;
    cout<<"\n Enter the expression: ";
    cin>>exp;
    cout<<"\n";
    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e)){
            cout << *e;
        }
        else if(*e == '('){
            push(*e);
        }
        else if(*e == ')'){
            while((x == pop() != '(')){
                cout << x;
            }
        }
        else{
            while(priority(arr[top] >= priority(*e))){
                cout << pop();
                push(*e);
            }
            e++;
        }
        while(top != 1)
        {
            cout << pop();
        }
    }
}
