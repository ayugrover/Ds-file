#include<iostream>
using namespace std;
#define MAX 100
class Stack
{
	int top;
	public:
		Stack(){top=-1;}
		char a[MAX];
        void push(char x);
		char pop();
		bool isEmpty();
};
void Stack:: push(char  x)
{
	if(top>=MAX-1)
	    cout<<"Stack overflow"<<endl;
	else
	  {
	  	a[++top] =x;
	  }
}
char Stack::pop()
{
	if(top<0)
	{
		cout<<"Stack underflow"<<endl;
	}
	else
	{
		char p =a[top--];
		return p;
	}
}
bool Stack :: isEmpty()
{
	if( top<=-1)
	return  true;
	else
		return false;
}
int main()
{
	Stack s;
	string str = "[]";
	char a = '\0',b;
	int i=0;
	int flag=0;
	while(str[i]!='\0')
	{
		flag=0;
		a=str[i];
		if(a=='[' ||  a=='{' || a=='(')
		{
			s.push(a);
		}
		else if (a==']' ||  a=='}' || a==')')
		{
			if(s.isEmpty())
			{
				flag =1;
				break;
			}
			b=s.pop();
	
		if(!((b == '(' && a == ')') ||
        (b == '{' && a == '}') ||
        (b == '[' && a == ']')))
		{
			flag=1;
			break;
		}
	}
	i++;	
}
	if(flag == 0)
	{
		cout<<"Blanced paranthesis"<<endl;
	}
	else
	{
		cout<<"Unblanaced";
	}
}
