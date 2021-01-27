// constructor overloadiong
using namespace std;
#include<iostream>
class rectangle
{
	int l,b;//data member
	public:
		rectangle(){
		}
		
	rectangle(int x)
	{
		l=x;
	
	}

void area()
{
	cout<<"Area="<<l<<"\n";
}
};
int main()
{
	rectangle r1=4;
	r1.area();
	rectangle r2();
	r2.area();
	rectangle r3(4);
	r3.area();
}
