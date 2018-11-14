#include<iostream>
using namespace std;
#define MAX 100

class Stack
{
	int top;
	public:
		int a[MAX];
		Stack(){
			top=-1;
		}
		void push(int x);
		int pop();
		bool isEmpty();
};
void Stack:: push(int x)
{
	if(top>=MAX-1)
	    cout<<"Stack overflow"<<endl;
	else
	  {
	  	a[++top] =x;
	  }
}
int Stack::pop()
{
	if(top<0)
	{
		cout<<"Stack underflow"<<endl;
	}
	else
	{
		int x =a[top--];
		return x ;
	}
}
bool Stack ::isEmpty()
{
	return top<0;
}
int main()
{
	Stack s;
	int x;
	for(int i=0;i<5;i++)
	{
		cin>>x;
		s.push(x);
	}
	for(int i=0;i<=5;i++)
	{
		cout<<s.pop()<<endl;
	}
	
}
