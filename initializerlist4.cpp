using namespace std;
#include<iostream>
class rectangle
{
	int &l,&b;
	public:
		rectangle(int x,int y):l(x),b(y)
		{
			
		}
	void area()
	{
		cout<<"area is:"<<l*b;
		
	}
};
int main()
{
	rectangle r(12,34);
	r.area();
	
}
