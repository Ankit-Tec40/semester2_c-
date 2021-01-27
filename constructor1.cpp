using namespace std;
#include<iostream>
class rectangle
{
	int l,b;
	public:
		rectangle()    //default constructor
		{
		l=12;
		b=12;	
		}
	void area()
	{
		cout<<"Area="<<l*b;
	}
};
int main()
{
	rectangle r;
	r.area();
	
}
