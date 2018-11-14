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
node* insertNode(node* root , int k)
{
	if(root==NULL)
		return createNode(k);
    if(k<root->data)
		root->left = insertNode(root->left , k);
	else
		root->right = insertNode(root->right , k);
	
	return root;
}
void traverse(node* root)
{
	if(root==NULL)
		return;
	else
		{
			traverse(root->left);
			cout<<root->data;
			traverse(root->right);
		}
}
int main()
{
	node* root1=NULL;
	int n=0;
	while(n!=-1)
	{
		cin>>n;
		root1 = insertNode(root1,n);
	}
	traverse(root1);
}
