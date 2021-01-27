//paramaterized constructors
using namespace std;
#include<iostream>
class rectangle

{
	int l,b;
	public:
		rectangle(int x,int y)
		{
		l=x;
		b=y;	
		}
	void area()
	{
		cout<<"area="<<l*b;
		
		
			}
};

int main()
{
	int x,y;
	cout<<"enter l and b\n";
	
	cin>>x>>y;
	rectangle r1(x,y);
	r1.area();
	
}
