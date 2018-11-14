#include<stdio.h>
struct node{
	int data;
	struct node*next;
};

void printlist(struct node *n){
	while(n!=NULL){
		printf("%d ",n->data);
		printf("%d",n->next;
		n=n->next;
	}
}
int main(){
	  struct Node* head = NULL;
	  struct Node* second = NULL;
	  struct Node* third = NULL;
	  
	  head = (struct node*)malloc(sizeof(struct node));
	  second = (struct node*)malloc(sizeof(struct node));
	  third = (struct node*)malloc(sizeof(struct node));
	  
	  head->data = 2;
	  head->next = second;
	  
	  second->data = 4;
	  second->data = third;

	  third->data = 6;
	  third->next = NULL;    
	  
	  printlist(head);
	  return 0;
}
