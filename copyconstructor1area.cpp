//copy constructor
using namespace std;
#include<iostream>
class rectangle
{
	int l,b;//data member
	public:
		rectangle(int x,int y)//parametarized
		{
			l=x;
			b=y;
		}
	rectangle(rectangle &r)//copy
	{
		l=r.l;
		b=r.b;
	}
void area()
{
	cout<<"Area="<<l*b<<"\n";
}
};
int main()
{
	rectangle r1(5,2);
	r1.area();
	rectangle r2=r1;//call to copy const
	r2.area();
	}
