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
 void show(node *current);
 
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
 	cout<<"4. To check the frequency \n";
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
 void frequency(node *&head){
 	int arr[100]={0};
 	struct node *ptr;
 	ptr=head;
 	if(isEmpty(head)){
 		cout<<"The list is empty\n";
	 }
	 else{
	 	while(head!=NULL){
	 		arr[head->number]++;
	 		head=head->next;
	 		 }
		 while(ptr!=NULL){
		 for(int i=0;i<1000;i++){
		 	
		 	if(i==ptr->number ){
		 		cout<<i<<arr[i]<<endl;
		 	}
		 }
		 ptr=ptr->next;
	 }
 	
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
			case '3':
				{
					show(head);
					break;
				}
			case '4':
			{
				frequency(head);
				break;
			}
			default:
				cout<<"System exit\n";
		  }
	  }while(choice != '5');
  	return 0;
  }

 
 
 
