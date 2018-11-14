#include<iostream>
using namespace std;
# define MAX 10
class Queue
{
	public:
	int rear,front;
	int q[MAX]={0};
	Queue(){rear=front=-1;}
	void insert	(int x)
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
			q[rear]=x;
		}
		else if(front==0 && rear ==MAX-1)
		{
			cout<<"Queue is full" ;
		}
		else if(front==rear+1 && front == (rear+1)%sizeof(q))
		{
			cout<<"Queue is full";
		}
		else if(front!=0 && rear ==MAX-1)
		{
			rear=0;
			q[rear]=x ;
		}
		else
		q[++rear]=x;
	}
	void show(int n)
	{
	for(int i=front;i<=rear;i++)
	{
		cout<<q[i]<<"->";
	}
	}
	void delete1()
	{
		if(front == -1)
		{
			cout<<"underflow";
		}
		else if(front == rear)
		{
			rear=front=-1;
		}
		else if(front == MAX-1 && front!=rear)
		{
			front = 0;
		}
		else
		 front++;
	}
};
int main()
{
	Queue a;
	int s,n;
	cout<<"Enter the no of elements : ";
	cin>>n;
	a.show(n);
	int p=n;
	cout<<"Enter the elements : ";
	while(n--)
	{	
	    cin>>s;
		a.insert(s);
	}
	cout<<"The queue is : ";
	a.show(p);
	cout<<"After deletion queue is : ";
	a.delete1();
	cout<<"\n";
	a.show(p);
}
