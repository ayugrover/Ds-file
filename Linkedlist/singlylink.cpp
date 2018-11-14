#include<iostream>
using namespace std;
struct node{
	int number ;
	struct node *next;
	struct node *prev;
};

 bool isEmpty(node *head);
 char menu();
 void insertfirst(node *&head,node *&last,int number);
 void insert(node *&head, node *&last,int number);
 void remove(node *&head,node *&last);
 void show(node *current);
 void insertBefore(node *&head,node *&last,int number);
 
bool isEmpty(node *head)
  {
  	if(head == NULL)
  		return true;
  	else
  		return false;
  }
 char menu()
 {
 	char choice;
 	cout<<"Menu\n";
 	cout<<"1. To add item\n";
 	cout<<"2. To remove item\n";
 	cout<<"3. To show the list\n";
 	cout<<"4. to insert before\n";
 	cout<<"Exit\n";
 	cin>> choice;
 	return choice;
 }
 void insertfirst(node *&head,node *&last,int number)
 {
 	node *temp = new node;
	 temp->number = number;
	 temp->next = NULL;
	 temp->prev=NULL;
	 head = temp;
	 last =temp;	
 }
 void insertBefore(node *&head,node *&last,int number)
 {
 	node *temp = new node;
 	temp->number=number;
 	int s;
 	cout<<"enter the num before you want to insert";
 	cin>>s;
    	while(head->next!=NULL){
 		if(head->number == s)
 			last=head;
 		head=head->next;  
	   }
	   cout<<last->number;
	 temp->next=last;
	 temp->prev->next=temp;
	 temp->prev=last->prev;
	 last->prev=temp;
    
}

 void insert(node *&head, node *&last,int number)
 {
 	if(isEmpty(head)){
 		insertfirst(head,last,number);
	 }
	 else{
	 	node *temp=new node;
	 	temp->number=number;
	 	temp->next = NULL;
	 	temp->prev = NULL;
	 	last->next = temp;
	 	last= temp;
	 }
 }
 void remove(node *&head,node *&last)
 {
 	if(isEmpty(head)){
 		cout<<"The list is already empty.\n";
	 }
	 else if(head == last)
	 {
	 	delete head;
	 	head = NULL;
	 	last = NULL;
	 }
	 else
	 {
	 	node *temp = head;
	 	head = head->next;
	 	delete temp;
	 	head->prev=NULL;
	 }
 }
 void show(node *current)
 {
 	if(isEmpty(current)){
 		cout<<"The list is empty\n";
	 }
	 else
	  cout<<"The list contains :\n";
	  while(current!= NULL){
	  	cout<<current->number;
	  	current=current->next;
	  }
 }
 
  int main()
  {
  	struct node *head = NULL;
  	struct node *last = NULL;
  	char choice ;
  	int number;
  	do{
     	choice=menu();
  		switch(choice){
  			case '1' :
  				{
  					cout<<"Enter a number\n";
  					cin>>number;
  					insert(head,last,number);
  					break;
				}
		    case '2' :
		   	{
		   	    	remove(head,last);	
		   	    	break;
			}
			case '3':
				{
					show(head);
					break;
				}
			case '4':
			{
				cout<<"Enter the number you want to insert\n";
				cin>>number;
				insertBefore(head,last,number);
				break;
			}
			default:
				cout<<"System exit\n";
				break;
		  }
	  }while(choice != '5');
  	return 0;
  }

