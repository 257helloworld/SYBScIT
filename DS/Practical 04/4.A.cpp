/* Write a program to create and display the elements in One-Way Linked list */
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int info;
    struct Node * Next;
};
struct Node * Begin;
void createLinkedList(int n)
{
    struct Node * Ptr;
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            Begin = (struct Node *)malloc(sizeof(struct Node));
            if(Begin == NULL)
            {
                cout << "\nMemory cannot be allocated";
                break;
            }
            cout << "\nEnter Data for Node 1: ";
            cin >> Begin->info;
            Begin -> Next = NULL;
            Ptr = Begin;
        }
        else
        {
            struct Node * New = (struct Node *)malloc(sizeof(struct Node));
            if(New == NULL)
            {
                cout << "\nMemory cannot be allocated";
                break;
            }
            cout << "Enter Data for Node " << i+1 << ": ";
            cin >> New->info;
            New -> Next = NULL;
            Ptr -> Next = New;
            Ptr = Ptr -> Next;
            
        }
    }
    
}
void printLinkedList()
{
    struct Node * Ptr;
    if(Begin != NULL)
    {
        cout << "\nSingly Linked List is: ";
        Ptr = Begin;
        cout << Ptr -> info;
        Ptr = Ptr -> Next;
        while (Ptr != NULL)
        {
            cout << ", " << Ptr -> info;
            Ptr = Ptr -> Next;
        }
        
    }
    else
        cout << "\nLinked list is empty";

}
int main()
{
    cout << "-----One Way Linked List-----\n";
    int n;
    cout << "\nEnter no. of Nodes: ";
    cin >> n;
    createLinkedList(n);
    printLinkedList();
    cout << "\n";
}
