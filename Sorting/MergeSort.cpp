#include<iostream>
using namespace std;
void print(int [],int );
void merge(int A[],int l[],int r[],int p,int q)
{
	int i=0,j=0,k=0;	
	while(i<p && j<q)
	{
		if(l[i]<=r[j])
		{
			A[k++]=l[i++];
		}
		else
			A[k++]=r[j++];
	}
	while(i<p)
	{
		A[k++]=l[i++];
	}
	while(j<q)
	{
			A[k++]=r[j++];
	}

}
void mergeSort(int *A, int n)
{
	int *l,*r;
	if(n<2)
		{return;}		
			int m=int(n/2);
			l = new int[20];
			 r = new int[20];
			for(int i=0;i<m;i++)
			{
				l[i]=A[i];
			}
			for(int j=m;j<n;j++)
			{
				r[j-m]=A[j];
			}
			mergeSort(l,m);
			mergeSort(r,n-m);
			merge(A,l,r,m,n-m);
		      delete l;
		      delete r;
	
}
void print(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
int main()
{
	int n,A[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	mergeSort(A,n);
	print(A,n);
}
