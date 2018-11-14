#include<iostream>
using namespace std;
#define MAX 10
class Dequeue
{
	public:
		int a[MAX]={0};
		int left,right;
		Dequeue()
		{
			left=-1;
			right=-1;
		}
	void insertLeft(int x,int n)
	{
		if(left==-1 && right==-1)	
		{
			left=0;
			right=0;
			a[left]=x;
			right++;
		}
		else if(left==0)
		{
			left=n-1;
			a[left--]=x;
		}
		else
		 a[left--]=x;
	}
	void insertRight(int x,int n)
	{
		if(left==-1 && right==-1)	
		{
			left=0;
			right=0;
			a[right++]=x;
		}
		else if(right==n)
		{
			right=0;
			a[right++]=x;
		}
		else
			a[right++]=x;
	}
	void deleteRight()
	{
		
	}
	void show(int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"->";
		}
	}
	
};
int main()
{
	Dequeue d;
	int n,s,c;
	cout<<"Enter the size :";
	cin>>n;
	int p=n;
	d.show(p);
	while(n--){  
	cout<<"\nEnter the choice: ";
	cin>>c;
	switch(c)
	{
		case 1 :
			{
				cout<<"\nEnter the element :";
				cin>>s;
				d.insertLeft(s,p);
				d.show(p);
				break;
			}
		case 2 :
			{
				cout<<"\nEnter the element :";
				cin>>s;
				d.insertRight(s,p);
				d.show(p);
				break;
			}
		default :
			{
				n=0;
				break;
			}
			
    	}
	}
}
