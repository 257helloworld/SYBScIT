/* Write a program to create and display the elements in a Doubly Linked List */
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    struct Node * Pre;
    int info;
    struct Node * Next;
};
struct Node * Begin = NULL;
struct Node * End = NULL;
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
            Begin -> Pre = NULL;
            Begin -> Next = NULL;
            Ptr = Begin;
            End = Begin;
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
            New -> Pre = End;
            End -> Next = New;
            End = New;

        }
    }

}
void printEndToBegin()
{
    struct Node * Ptr;
    if(Begin != NULL)
    {
        cout << "\nDoubly Linked List is: ";
        Ptr = End;
        cout << Ptr -> info;
        Ptr = Ptr -> Pre;
        while (Ptr != NULL)
        {
            cout << ", " << Ptr -> info;
            Ptr = Ptr -> Pre;
        }

    }
    else
        cout << "\nLinked list is empty";

}
int main()
{
    cout << "-----Two Way Linked List-----\n";
    int n;
    cout << "\nEnter no. of Nodes: ";
    cin >> n;
    createLinkedList(n);
    printEndToBegin();
    cout << "\n";
}