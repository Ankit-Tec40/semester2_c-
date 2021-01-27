// constructor overloadiong
using namespace std;
#include<iostream>
class rectangle
{
	int l,b;//data member
	public:
		rectangle()
		{
			l=5;
			b=2;
		}
	rectangle(int x)
	{
		l=x;
		b=3;
	}
	rectangle(int x,int y)
	{
		l=x;
		l=y;
	}
void area()
{
	cout<<"Area="<<l*b<<"\n";
}
};
int main()
{
	rectangle r1;
	r1.area();
	rectangle r2(5);
	r2.area();
	rectangle r3(6,4);
	r3.area();
}
