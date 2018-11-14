#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *front=NULL;
Node *rear =NULL;
void insert(int val)
{
	Node *temp= new (Node);
	temp->data = val;
	temp->next = NULL;
		if(front==NULL && rear==NULL)
			{
				front=temp;
				rear=temp;
				return;
			}
		   rear->next = temp;
		   rear=temp;	
}
void delete1()
{
	Node *p =front;
	if(front==NULL)
	{
		cout<<"Underflow";
	}
	else if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
		front=front->next;
	}
	delete(p);
}
int main()
{
	int x,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		insert(x);
	}
	delete1();
	Node *p =front;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p =p->next;
	}
}
