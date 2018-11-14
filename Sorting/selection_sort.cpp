#include<iostream>
using namespace std;
int smallest(int a[],int s,int j)
{
int small=a[j],index=j,k;
for(k=j+1;k<s;k++)
{
	if(a[k]<small)
	{
		small=a[k];
		index=k;
	}
}	
return index;
}
void sort(int a[],int s)
{
int i,pos,temp;
for(i=0;i<s;i++)
{
	pos=smallest(a,s,i);
	temp=a[pos];
	a[pos]=a[i];
	a[i]=temp;
}	
}
void disp(int a[],int s)
{
int i;
for(i=0;i<s;i++)
{
	cout<<a[i]<<" ";
}	
}
int main()
{
int a[20],size,i,p,c,temp;
cout<<"enter size of array : ";
cin>>size;
cout<<"enter elements of array\n";
for(i=0;i<size;i++)
{
	cin>>a[i];
}
sort(a,size);
cout<<"The sorted array is : "<<endl;
disp(a,size);
return 0;
}
