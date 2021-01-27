
//order of execution of constructor
using namespace std;
#include<iostream>
class base1
{
	public:
		base1()
		{
			cout<<"\n base class1 constructor called\n";
		}
};
class base2
{
	public:
		base2(){
	cout<<"\n base class2 constructor called\n";
}

};
class derived : public base1,public base2
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

