
//order of execution of constructor
using namespace std;
#include<iostream>
class base
{
	public:
		base(int x)
		{
			cout<<"\n base class constructor called="<<x;
		}
};
class derived : public base 
{
	public:
		derived(int y,int a):base(a)
		{
	cout<<"\n derived class constructor called="<<y;
}

};
int main()
{
	derived ob(15,5);
}
