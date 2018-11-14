#include<iostream>
using namespace std;
struct node
{
	int data;
	int priority;
	node *next;
};
void insert(node *&head,int x,int p)
{
	node *temp = new (node);
	temp->data=x;
	temp->priority=p;
	if(head== NULL || p<head->priority)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		node *s=new (node);
		s=head;
		while(s->next!=NULL && s->next->priority<=p)
		{
			s=s->next;
		}
		temp->next=s->next;
		s->next=temp;
	}
}
void show(node *head)
{
	while(head!=NULL)
	{
		cout<<"Element: "<<head->data<<" -> Priority: "<<head->priority<<endl;
		head=head->next;
	}
}
 void del(node *head)
        {
            node *temp;
            node *front=head;
            if(front == NULL)
                cout<<"Queue Underflow\n";
            else
            {
                temp = front;
                cout<<"Deleted item is: "<<temp->data<<endl;
                front = front->next;
                delete temp;;
            }
        }
int main()
{
	node *head= NULL;
	int n,p,num;
	cout<<"Enter the size: ";
	cin>>n;
	while(n--)
	{
		cout<<"Enter the element: ";
		cin>>num;
		cout<<"Enter the priority: ";
		cin>>p;
		insert(head,num,p);
	}
	show(head);
	del(head);
}
	
