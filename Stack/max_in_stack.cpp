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
  cout<<top;
} 
void pop(){
 int  p=a[top--];
  cout<<p;
}
  void show()
  {
    int m =-1;
    for(int i=0;i<MAX-1;i++)
    {
    if(a[i]>m)
        m=a[i];
    }
    //cout<<m;
  }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  Stack s;
  int t,c,n;
  cin>>t;
  while(t--)
  {
    cin>>c;
    switch(c)
    {
      case 1:
        {
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
          s.show();
          break;
        }
    }
  }
    return 0;
}

