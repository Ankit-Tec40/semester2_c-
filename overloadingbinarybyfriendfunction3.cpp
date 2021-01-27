//write a program to overload greaterthan operator to find the greater of two objects by using friend function
using namespace std;
#include<iostream>
class abc
{
	int x,y;
	public:
		void get()
		{
			cout<<"enter x and y";
			cin>>x>>y;
			
		}
	    friend void operator>(abc ob1,abc ob2);
	    
	};
	void operator>(abc ob1,abc ob2)
        {
        if(ob1.x>ob2.x&&ob1.y>ob2.y)
		cout<<"ob1 is greater\n";
		else
		cout<<"ob2 is greater";
			
        	
	     }		
		
		

int main()
{
	abc ob1,ob2;
	ob1.get();
	ob2.get();
	ob1>ob2;
}
