//write a program to perform the addition of 2 complex numbers by overloading binary operator
using namespace std;
#include<iostream>
class add{
	float r,i;
	public:
		add(float a,float b)
		{
		
	     r=a;
	     i=b;
	 }
	 void operator +(add ob)
	{
		r=r+ob.r;
		i=i+ob.i;
		cout<<"addition="<<r<<"+"<<i<<"i";
		
	}
	
	
};
int main()
{
	add ob1(5,6),ob2(8,9);
	ob1+ob2;
}
