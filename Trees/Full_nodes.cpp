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
	node *temp = new (node);
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
node* insert(node *root ,int x)
{
	if(root == NULL)
		return createNode(x);
	if(x<root->data)
	    root->left = insert(root->left,x);
	else
		root->right = insert(root->right,x);

return root;
}
int traverse(node *root)
{
	int c=0;
	if(root == NULL)
	{
		
		return 0;
	}    
 if(root->left && root->right)
	{
		c++;
	c += traverse(root->left) + traverse(root->right);
	}
   return c;
}
int main()
{
	node* root = NULL;
	int n = 0;
	while(n!=-1)
	{
		cin>>n;
		root = insert(root,n);
	} cout<<"No of nodes are : "<<traverse(root);;

}
