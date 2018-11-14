#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

void printlist(struct node *n){
	while(n != NULL){
		printf(" %d ",n->data);
		printf(" %d ",n->next);
		n=n->next;
	}
}
int main(){
	  struct node *head = NULL;
	  struct node *second = NULL;
	  struct node *third = NULL;
	  
	  head = (struct node*)malloc(sizeof(struct node));
	  second = (struct node*)malloc(sizeof(struct node));
	  third = (struct node*)malloc(sizeof(struct node));
	  
	  head->data = 2;
	  head->next = second;
	  
	  second->data = 4;
	  second->next = third;

	  third->data = 6;
	  third->next = NULL;    
	  
	  printlist(head);
	  return 0;
}
