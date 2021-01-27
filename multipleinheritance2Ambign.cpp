//multiple inheritance2//Ambigan
using namespace std;
#include<iostream>
class A{
	
	protected:
		int x;
		public:
			void get()
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
		void get()
		{
			cout<<"Enter y\n";
			cin>>y;
		}
	
};
class C : public A,public B
{
public:
void sum()
{
	cout<<"Sum is:"<<x+y;
	}	
};
int main()
{
	C ob;
	ob.A::dget();
	ob.B::get();
	ob.sum();
	
}
