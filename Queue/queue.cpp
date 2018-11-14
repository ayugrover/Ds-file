#include<iostream>
using namespace std;
#define MAX 5
class Queue
{
	public:
		int rear,front;
		int q[MAX];
		Queue()	{rear=front=-1;}
		void insert(int x)
		{
			if(front=rear =-1)
			{
				front=rear=0;
				q[rear]=x;
			}
			else if(rear =MAX-1)
			{
				cout<<"Queue is full";
			}
			else
			{
				q[++rear]=x; 
			}
		}
		int delete1()
		{
			if(front=-1 ||front>rear)
			{
				cout<<"underflow";
			}
			else 
			{
				return q[front];
				front =front+1;
			}
		}
		bool isEmpty()
		{
			if(front=rear=-1)
			  return true;
			else
			  return false;
		}
};
int main()
{
	Queue a;
	int s,n;
	while(n++!=5)
	{	cin>>s;
		a.insert(s);
	}
	cout<<a.delete1();
}
