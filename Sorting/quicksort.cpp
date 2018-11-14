#include<iostream>
using namespace std;
void swap(int * ,int *);
int partition(int ar[],int low,int high)
{
	int pi=ar[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++)
	{
		if(ar[j]<=pi)
		{
			i++;
			swap(&ar[i] , &ar[j]);
		}
	
	}
		swap(&ar[i+1],&ar[high]);
	return i+1;
}
void swap(int *a , int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void print(int ar[] , int n)
{
	for(int i=0;i<n;i++)
		cout<<ar[i]<<" ";
}
Quicksort(int ar[],int low,int high)
{
	if(low<high)
	{
		int p=partition(ar,low,high);
		Quicksort(ar,low,p-1);
		Quicksort(ar,p+1,high);
	}
}
int main()
{
	int n,ar[10];
	cout<<"Enter the size:\n";
	cin>>n;
	cout<<"Enter the elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int high=n;
	int low =0;
	Quicksort(ar,low,high-1);
	cout<<"The sorted array is:\n";
	print(ar,n);
}
