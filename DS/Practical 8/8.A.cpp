/* Write a program to implement the concept of circular queue */
#include<iostream>
#include<stdlib.h>
using namespace std;
class cqueue
{
	int * arr;
	int rear,front;
	int MAX;
	public:
		cqueue(int maxsize=10);
		void addq(int data);
		int delq();
		void display();
};
cqueue::cqueue(int maxsize)
{
	MAX=maxsize;
	arr=new int[MAX];
	front=rear=-1;
	for(int i=0;i<MAX;i++)
	{
		arr[i]=0;
	}
}
void cqueue::addq(int data)
{
	if((rear+1)%MAX==front)
	{
		cout<<"\nQueue is Full";
		return;
	}
	rear=(rear+1)%MAX;
	arr[rear]=data;
	if(front==-1)
	{
		front=0;
	}
}
int cqueue::delq()
{
	int num;
	if(front==-1)
	{
		cout<<"\n Queue is Empty";
	}
    else
    {
        num=arr[front];
        arr[front]=0;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%MAX;
        }
	return num;
    }
}
void cqueue::display()
{
	cout<<"\n";
	for(int i=0;i<MAX;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
    cout << "------------ Circular Queue ------------" <<endl;
	cqueue c(10);
	for(int k = 11; k <= 15; k++){
		c.addq(k);
	}
	cout<<"\nElements in circular queue are: ";
	c.display();
	int i=c.delq();
	cout<<"\nData Deleted is: "<<i;
	i=c.delq();
	cout<<"\nData Deleted is: "<<i<<endl;
	cout<<"\nElements in the circular queue after deletion are: ";
	c.display();
	for(int k = 1; k <= 5; k++){
		c.addq(k);
	}
	cout<<"\nElements in the circular queue after addition are: ";
	c.display();
}