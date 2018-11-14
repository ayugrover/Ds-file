#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*next;
}*head = NULL;

void printlist(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
void insert(node *&head,int x)
{
	node *temp= new (node);
	temp->data=x;
     if(head != NULL)
     {
     	temp->next = head;
   	 }
	 else
	 	temp->next = NULL;
		
	 head = temp;
}
void delete1(node *&head)
{
	if(head==NULL)
	{
		cout<<"Underflow";
	}
	else
	{
		node *temp;
		temp=head;
		head=head->next;
		delete temp;
	
	}
}
int main()
{
	int n,b;
	cout<<"Enter the no of elements : ";
	cin>>n;
	cout<<"Enter the elements : ";
	while(n--)
	{
		cin>>b;
		insert(head,b);
	}
	printlist(head);
	delete1(head);
	cout<<"After deletion : \n";
	printlist(head);
}
