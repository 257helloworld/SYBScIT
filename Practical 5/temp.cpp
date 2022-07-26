/* Write a program to create a Singly linked list and display the elements in reverse order */
#include<iostream.h>
#include<stdlib.h>
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
void revLinkedList()
{
    struct Node * Pre, * Curr;
    if(Begin != NULL)
    {
        Pre = Begin;
        Curr = Begin -> Next;
        Begin = Begin -> Next;
        Pre -> Next = NULL;
        while(Begin != NULL)
        {
            Begin = Begin -> Next;
            Curr -> Next = Pre;
            Pre = Curr;
            Curr = Begin;
        }
        Begin = Pre;
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
void main()
{
    clrscr();
    cout << "-----Reverse Linked List-----\n";
    int n;
    cout << "\nEnter no. of Nodes: ";
    cin >> n;
    createLinkedList(n);
    revLinkedList();
    printLinkedList();
    cout << "\n";
    getch();
}