//write a program to implement the concept of dequeue(double ended queue)
#include<iostream>
using namespace std;
#define max 5
int front=-1,rear=-1;
int q[max];
int insert_rear()
{
	int val;
	cout<<"➤ Enter value: ";
	cin>>val;
	if((rear+1)%max==front)
	{
		cout<<"Queue is full";
        cout << "-----------------";
		return 0;
	}
	else
	{
		if(rear == -1){
			rear = front = 0;
		}
		else
		{
			rear=(rear+1)%max;
		}
		q[rear]=val;
		cout<<"✔ Inserted successfully"<<endl;
        cout << "-----------------";
		return val;
	}
}
int insert_front()
{
	int val;
	cout<<"➤ Enter value: ";
	cin>>val;
	if((rear+1)%max==front)
	{
		cout<<"✘ Queue is full"<<endl;
        cout << "-----------------";
		return 0;
	}
	else
	{
		if(front == -1){
			rear = front = 0;
		}
		else
		{
			front = (front-1+max)%max;
		}
		q[front]=val;
		cout<<"✔ Inserted successfully"<<endl;
        cout << "-----------------";
		return val;
	}
}
int deleteq_front()
{
	int val;
	if(front==-1)
	{
		cout<<"✘ Queue is Empty"<<endl;
        cout << "-----------------";
	}
	else
	{
		val = q[front];
		if(front == rear)
		{
			front = rear-1;
		}
		else
		{
			front=(front+1)%max;
		}
		cout<<"✔ Deleted value = "<<val<<endl;
        cout << "-----------------";
		return val;
	}
}
int deleteq_rear()
{
	int val;
	if(rear==-1)
	{
		cout<<"✘ Queue is Empty"<<endl;
        cout << "-----------------";
		return -1;
	}
	else
	{
		int val = q[rear];
		if(front == rear)
		{
			front = rear - 1;
		}
		else
		{
			rear = (rear-1+max)%max;
		}
		cout<<"✔ Deleted value = "<<val<<endl;
        cout << "-----------------";
		return val;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		cout<<"✘ Queue is empty"<<endl;
        cout << "-----------------";
	}
	else
	{
		cout<<"• Queue element are: ";
		for(i=front;i!=rear;i=(i+1)%max)
		{
			cout<<q[i]<<" ";
		}
		cout<<q[i]<<" "<<endl;
        cout << "-----------------";
	}
}
int main()
{
	int choice;
	cout<<"--------- Double ended queue ---------";
	cout<<"\n\n1. Insert from Rear \t 2. Insert from Front\n";
	cout<<"3. Delete from Rear \t 4. Delete from Front\n";
	cout<<"5. Display \t\t 6. Exit\n";
	do
	{
		cout<<"\nEnter a choice: ";
		cin>>choice;
		cout<<"\n";
		switch(choice)
		{
		case 1:insert_rear();
		       break;
		case 2:insert_front();
		       break;
		case 3:deleteq_rear();
		       break;
		case 4:deleteq_front();
		       break;
		case 5:display();
		       break;
		case 6:break;
		default:cout<<"✘ Invalid Choice"<<endl;
		}
	}while(choice!=6);
}