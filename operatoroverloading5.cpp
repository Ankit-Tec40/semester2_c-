//write a program to overload equality operator to check whether two objects are equal or not
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
		void operator==(abc ob)
        {
        if(x==ob.x&&y==ob.y)
		cout<<"Two objects are equal\n";
		else
		cout<<"Two objects are not equal";
			
        	
	     }		
		
		
};
int main()
{
	abc ob1,ob2;
	ob1.get();
	ob2.get();
	ob1==ob2;
}
