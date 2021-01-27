using namespace std;
#include<iostream>
class rectangle
{
	int l,b;
	public:
		rectangle(int l,int b):l(l),b(b)
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
