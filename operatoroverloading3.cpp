//program to perform addition of 2 obj by overloading plus operator
using namespace std;
#include<iostream>
class add{
	int x,y;
	public:
		add(int a,int b)
		{
			x=a;
			y=b;
		}
	void operator +(add ob)
	{
		x=x+ob.x;
		y=y+ob.y;
		cout<<"after addition x and y="<<x<<" "<<y;
	}
};
int main()
{
	add ob1(12,34),ob2(45,67);
	
	ob1+ob2;
}
