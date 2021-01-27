//writa a program to calculaate area of traingle by using friend function
using namespace std;
#include<iostream>
class traingle
{
	float b,h,area;
	public:
	void get()
	{
		cout<<"Enter Length of base And height\n";
		cin>>b>>h;
	}
	friend void show(traingle ob);
	
	
};
void show(traingle ob)
{

	cout<<"The area is:"<<0.5F*ob.b*ob.h;
	
}
int main()
{
	traingle A;
	A.get();
	show(A);
}
