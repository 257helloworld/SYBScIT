/* Write a program to search and display the elements in One-Way Linked List. */
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
void searchLinkedList()
{
    int s, flag, i = 0;
    cout << "\nEnter element to search: ";
    cin >> s;
    struct Node * Ptr;
    Ptr = Begin;
    if(Ptr != NULL)
    {
        while (Ptr != NULL)
        {
            if(Ptr -> info == s)
            {
                cout << "\n" << s << " found at Location: " << i+1;
                flag = 1;
            }
            i++;
            Ptr = Ptr -> Next;
        }
    }
    else
        cout << "\nLinked List is empty";
    if(flag != 1)
        cout << "\n" << s << " NOT found in Linked List.";

}
int main()
{
    cout << "-----One Way Linked List-----\n";
    int n;
    cout << "\nEnter no. of Nodes: ";
    cin >> n;
    createLinkedList(n);
    searchLinkedList();
    cout << "\n";
}
