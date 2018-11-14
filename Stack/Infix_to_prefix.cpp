#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

class Stack
{
	public:
		int top;
		char a[MAX];
		Stack(){
			top=-1;
		}
		void push(char x);
		char pop();
		bool isEmpty();
		int Top(){
			return a[top];
		}
};
void Stack :: push(char x)
{
	if(top>=MAX-1)
	{
		cout<<"Stack overflow";
	}
	else
	{
		a[++top]=x;
	}
}
char Stack :: pop()
{
	if(top<0)
	{
		cout<<"stack underflow";
	}
	else
	{
		char p;
		p=a[top--];
		return p;
	}
}
bool Stack :: isEmpty()
{
	if(top<=-1)
	{
		return true;
	}
	else
		return false;
}
int getWeight(char p)
{
	int weight = 0;
	switch(p)
	{
		case '+':
		case '-':
			weight =1;
			break;
		case '*':
		case '/':
		case '%':
			weight = 2;
			break;
		case '^':
			weight = 3;
			break;
		return weight;
	}
}
string reverse1(string s)
{
	string a="";
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]==')')
		{
		s[i]='(';
	    }
	    else if(s[i]=='(')
	    {
	    	s[i]=')';
		}
		 a+=s[i];
	}
	return a;
}
int main()
{
	Stack s;
	string ptr ="A+(B*C-(D/(E*F))*G)*H";
	string str="";
	string r="";
	str = reverse1(ptr);
	//cout<<str;
	int i=0,j=0;
	char c;
	while(str[i]!='\0')
	{
		c=str[i];
	//	cout<<str[i];
		if(c>=65 && c<=97)
		{
			r+=c;
		}
		else if(c =='+' || c=='-' || c=='%'|| c == '*'|| c=='/'|| c=='^')
		{
			  if(!s.isEmpty() && s.Top()!='(' && getWeight(c)<= getWeight(s.Top()))
			  {
			  	 r+=s.pop();
			  }
			  s.push(c);
		}
		if(c=='(')
		{
			s.push(c);
		}
		if(c == ')')
		{
			while(!s.isEmpty() && s.Top()!='(')
			      r+=s.pop();
		 s.pop();
		}
		i++;
	}
	while(!s.isEmpty())
	{
		char k=s.pop();
		r+=k;
	}
	cout<<reverse1(r);
return 0;
} 
