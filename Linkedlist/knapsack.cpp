#include<iostream>
using namespace std;
#define MAX 60
int main()
{
	int p[10],w[10],r[10],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		cin>>w[i];
		r[i]=p[i]/w[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(r[j]<r[j+1])
			{
				int t = r[j];
				r[j] = r[j+1];
				r[j+1]=t;
				
				t =p[j];
				p[j]=p[j+1];
				p[j+1]=t;
				
				t=w[j];
				w[j]=w[j+1];
				w[j+1]=t;
			}
		}
	}
	int profit=0,a=0,s=0,k=0,m;
  do{
  		a+=w[k];
    	m=k;
		profit+=p[k];
		k++;			
	}while(a<MAX);
	a=a-w[m];
	profit-=p[m];
	s=MAX-a;
	int b = r[m]*s;
	cout<<profit+b;
}
