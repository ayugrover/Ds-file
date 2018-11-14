#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
void insert(node *&head,int x)
{
	node *temp = new (node);
	temp->data = x;
	if(head == NULL)
		temp->next = NULL;
	else
	temp->next = head;
	
  head=temp;
}
void reverse(node *&head)
{
	/*node *fwd=NULL;
	node *prev=NULL;
	while(head!=NULL)
	{
		fwd=head->next;
		head->next=prev;
		prev=head;
		head=fwd;
	}
	head = prev;*/
	if(head == NULL)
		return;
	
	reverse(head->next);
	cout<<head->data<<" ";
}
void print(node *head)
{
	while(head != NULL)
		{
			cout<<head->data<<" ";
			head=head->next;
		}
		cout<<endl;
}
int main(){
    node *head = NULL;
    int n,x;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"Enter the elements : ";
    while(n--)
    {
    	cin>>x;
    	insert(head,x);
	}
	cout<<"Linked list before reversing : "<<endl;
	print(head);
	cout<<"Linked list after reversing : "<<endl;
	reverse(head);
//	print(head);
}
