#include<iostream>
#include<string.h>
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
/*int IsRightAssociative(char op)
{
	if(op == '$') return true;
	return false;
}*/
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
/*bool precedence(char o1 , char o2)
{
	int w1 = getWeight(o1);
	int w2 = getWeight(o2);
	
	if(w1==w2)
	{
		if(IsRightAssociative(o1))
		 return false;
		else
		 return true;
	}
	return (w1 > w2) ?true : false;
}*/

int main()
{
	Stack s;
	string str ="A-B/(C*D^E)";
	string r=" ";
//	str= strrev(ptr);
	int i=0,j=0;
	char c;
	while(str[i] != '\0')
	{
		c = str[i];
		if(c >= 65 && c <= 97)
		{
			//cout<<c;
			r+=c;
		}
		else if(c =='+' || c=='-' || c=='%'|| c == '*'|| c=='/'|| c=='^')
		{
		  if(!s.isEmpty() && s.Top()!='(' && getWeight(c)<= getWeight(s.Top()))
		  {
			//cout<<s.pop();
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
			while(!s.isEmpty()&& s.Top()!='(')
			      //cout<<s.pop();
			      r+=s.pop();
		 s.pop();
		}
		i++;
	}
	while(!s.isEmpty())
	{
		char k=s.pop();
		r+=k;
		//cout<<k;
	}
	cout<<endl<<r;
return 0;
} 
