//write a program to perform the addition of 2 complex numbers by overloading binary operator
using namespace std;
#include<iostream>
class complex{
	float r,i;
	public:
		
		complex(){
		}
		
		complex(float a,float b)
		{
		
	     r=a;
	     i=b;
	 }
	 complex operator +(complex ob)
	{
		complex c;
	    c.r=r+ob.r;
	    c.i=i+ob.i;
	    return c;
		
	}
	void show()
	{
	
	
		cout<<"addition="<<r<<"+"<<i<<"i";
    }
	
	
	
};
int main()
{
	complex ob1(5,6),ob2(8,9);
	complex ob3;
	
	ob3=ob1+ob2;
	ob3.show();
}
