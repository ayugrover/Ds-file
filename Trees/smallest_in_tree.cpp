#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* left ;	
	struct node* right ;
};
node* createNode(int x)
{
	node* temp = new(node);
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node* insertNode(node* root,int x)
{
	if(root==NULL )
		return createNode(x);
	if(x<root->data)
		root->left=insertNode(root->left,x);
	else
		root->right=insertNode(root->right,x);

	return root;
}
int traverse(node* root)
{
	if(root->left == NULL)
		return root->data;
	
	traverse(root->left);
		
}
int main()
{
	node* root1=NULL;
	int n=0,k;
	while(n!=-1)
	{
		cin>>n;
		root1 = insertNode(root1,n);
	}
	int x = traverse(root1);
	cout<<"Smallest node is : "<<x;
}
