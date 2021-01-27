//write a progeom to calculate area of rectanglc,traingle and circle by using function overloading
using namespace std;
#include<iostream>
void area(int l,int b);
void area(float ba,float h);
void area(float r);
int main()
{
	int l,b;
	cout<<"enter length and breadth\n";
	cin>>l>>b;
	area(l,b);
	float ba,h;
	cout<<"enter base and height\n";
	cin>>ba>>h;
	area(ba,h);
	float r;
	cout<<"enter radious\n";
	cin>>r;
	area(r);
}
void area(int l,int b)
{
	cout<<"area of traingle is:"<<l*b<<"\n";
	
}
void area(float ba,float h)
{
	cout<<"area of traingle is:"<<0.5*ba*h<<"\n";
	
}
void area(float r)
{
	cout<<"area of circle is:"<<3.14*r*r<<"\n";
}
