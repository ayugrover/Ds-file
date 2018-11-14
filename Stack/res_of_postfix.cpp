#include<iostream>
#include<cctype>
using namespace std;
#define MAX 1000
class Stack
{
	public:
		int top;
		int a[MAX];
		Stack(){ top=-1;}
		void push(int x);
		int pop();
		bool isEmpty();
};
void Stack::push(int s)
{
	
	if(top>=MAX-1)
		cout<<"Stack overflow"<<endl;
	else
	    a[++top]=s;
}
int Stack::pop()
{
	int d;
	if(top<0)
	  cout<<"underflow"<<endl;
	else
	   d=a[top--];
	  
	return d;
}
bool Stack::isEmpty()
{
	if(top<=-1)
		return true;
	else
		return false;
}
int main()
{
		Stack s;
		string str="235+*";
		int i=0,c,r,d;
		int chr;
		char p;
	for(i=0;i<str.length();i++){
	chr=str[i]-'0';
	if(chr>=0 && chr<=9){
		s.push(chr);
       	}
	 else
			{
				c=s.pop();
				r=s.pop();
				p= (char)(chr+'0');
				d=0;
				switch(p)
				{
					case '+':
						{
							d=c+r;
							break;
						}
					case '-':
						{
							d=c-r;
							break;
						}
					case '*':
						{
							d=c*r;
							break;
						}
					case '/':
					{
						d=c/r;
						break;
					}
					case '%':
					{
						d=c%r;
						break;
					}
				}
				s.push(d);
			}
	
		}
		cout<<s.pop();
}
