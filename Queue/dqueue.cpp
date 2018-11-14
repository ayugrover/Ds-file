#include<iostream>
using namespace std;
# define MAX 100;
class Dqueue
{
	public: 
	int a[MAX];
	void insertRight(int x);
	void insertLeft(int x);
	int deleRight();
	int deleLeft();
};
void Dqueue::insertRight(int x)
{
	
}
void Dqueue::insertLeft(int x)
{
	
}
int Dqueue::deleLeft()
{
	
}
int Dqueue::deleRight()
{
	
}
int main()
{
	Dqueue d;
	int n=0,s;
	while(n!=5){
	     cout<<"Enter 1 to insert on left"<<endl;
		 cout<<"Enter 2 to insert on right"<<endl;
		 cout<<"Enter 3 to delete on right"<<endl;
		 cout<<"Enter 4 to delete on left"<<endl;
		 cout<<"Enter 5 to exit ."<<endl;
		 cout<<"Enter the value of n:"<<endl;
	    cin>>n;
	    switch(n)
	    {
	    	case 1:
	    		{
	    			cout<<"Enter the no to be inserted:"<<endl;
	    			cin>>s;
	    			d.insertLeft(s);
	    			break;
				}
			case 2:
				{
					cout<<"Enter the no to be inserted:"<<endl;
					cin>>s;
					d.insertRight(s);
					break;
				}
			case 3:
				{
					cout<<"The no deleted from right is: "<<d.deleRight()<<endl;
					break;
				}
			case 4:
				{
					cout<<"The no deleted from left is: "<<d.deleLeft()<<endl;
					break;
				}
			default:
				{
				cout<<"Exit";
				n=5;
				break;
				}
		}
	}	
	
}
