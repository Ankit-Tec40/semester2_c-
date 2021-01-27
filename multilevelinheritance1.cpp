//multilevel inheritance
using namespace std;
#include<iostream>
class A{
	
	protected:
		int x;
		public:
			void get_x()
			{
				cout<<"Enter x\n";
				cin>>x;
			}
};
class B : public A
{
	protected:
	int y;
	public:
		void get_y()
		{
			cout<<"Enter y\n";
			cin>>y;
		}
	
};
class C : 5t public B
{
public:
void get()
{
	cout<<"Sum is:"<<x+y;
	}	
};
int main()
{
	C ob;
	ob.get_x();
	ob.get_y();
	ob.get();
	
}
