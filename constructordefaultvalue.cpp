//constructor with default values
using namespace std;
#include<iostream>
class rectangle
{
	int l,b;
	public:
		rectangle(int x=4,int y=2)
		{
			l=x;
			b=y;
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
	rectangle r2(6);
	r2.area();
	rectangle r3(9,4);
	r3.area();
	}
