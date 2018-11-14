#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;	
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
	int h=0,h1=0;
	if(root->left != NULL)
		h=1+traverse(root->left);
	else if(root->right != NULL)
		h1=1+traverse(root->right);
		
	if(h<h1)
		return h1;
	else
		return h;
}
int main()
{
	node* root1=NULL;
	int n=0;
	cout<<"Enter the elements && enter -1 to exit : ";
	while(n!=-1)
	{
		cin>>n;
		root1 = insertNode(root1,n);
	}
	int x = traverse(root1);
	cout<<"The height of the tree is : "<<x;
}
