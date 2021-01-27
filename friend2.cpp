//writa program to input 3 integers and fing out the    largest among them by using friend function
using namespace std;
#include<iostream>
class comp
{
	int a,b,c;

public:
	void get()
	{
		
		cout<<"enter 3 numbers\n";
		cin>>a>>b>>c;
	}
	friend void show(comp ob);
};
void show(comp ob)
{
	if(ob.a>ob.b&&ob.b>ob.c)
	{
		cout<<"a is greater";
	}
	else if
	(ob.b>ob.c)
	{
		cout<<"b is greater";
		
		}
		else
		{
			cout<<"c is greater";
		}
}
int main()
{
	comp c;
	c.get();
	show(c);
	
}



