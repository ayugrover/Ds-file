#include<iostream>
using namespace std;
void print(int ar[],int n)
{
	for(int r=0;r<n;r++)
	{
		cout<<ar[r]<<" ";
	}
}
int main()
{
	int ar[10],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	print(ar,n);
	cout<<endl;
	for(int k=1;k<n;k++)
	{
			int temp=ar[k];
			int j=k-1;
			while(ar[j]>temp && j>=0)
			{
				ar[j+1]=ar[j];
				j--;
			}
			ar[j+1]=temp;
			print(ar,n);
			cout<<endl;
	}
	
}
