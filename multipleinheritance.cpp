//multiple inheritance
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
class B
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
class C : public A,public B
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
