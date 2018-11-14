#include<iostream>
using namespace std;
int main()
{
int a[20],size,i,p,c,j,temp;
cout<<"enter size of array :\n";
cin>>size;
cout<<"enter elements of array\n";
for(i=0;i<size;i++)
{
	cin>>a[i];
}
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
cout<<"The sorted Array is : \n"
for(i=0;i<size;i++)
{
	cout<<a[i])<<" ";
}
}
