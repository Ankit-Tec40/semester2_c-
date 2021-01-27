
//order of execution of constructor
using namespace std;
#include<iostream>
class base
{
	public:
		base()
		{
			cout<<"\n base class constructor called\n";
		}
};
class derived : public base
{
	public:
		derived(){
	cout<<"\n derived class constructor called\n";
}

};
int main()
{
	derived ob;
}
