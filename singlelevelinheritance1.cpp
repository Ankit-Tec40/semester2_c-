//single level inheritance
using namespace std;
#include<iostream>
class A{
	
	protected:
		int x;
};
class B : public A
{
	int y;
	public:
		void get()
		{
			cout<<"Enter x and y\n";
			cin>>x>>y;
		}
		void sum()
		{
			cout<<"Sum is:"<<x+y;
		}
};
int main()
{
	B ob;
	ob.get();
	ob.sum();
	
}
