#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;
class Stack{
  public:
  int top,a[MAX];
  Stack(){top=-1;}
void push(int x)
{
    a[++top]=x;
} 
void pop(){
 int  p=a[top--];
}
void show()
  {
    int m =-1;
    while(top != NULL)
    {
	    if(a[top]>m)
	        m=a[top];
    top--;
    }
    cout<<m;
  }
};
int main() {
  Stack s;
  int t,c,n;
  cout<<"Enter the no of elements : ";
  cin>>t;
  while(t--)
  {
  	cout<<"Enter your choice : ";
    cin>>c;
    switch(c)
    {
      case 1:
        {
          cout<<"Enter the element : ";
          cin>>n;
          s.push(n);
          break;
        }
      case 2:
        {
          s.pop();
          break;
        }
      case 3:
        {
		cout<<"\nThe maximum element is : \n";
          s.show();
          break;
        }
    }
  }
    return 0;
}

