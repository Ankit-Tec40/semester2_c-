//write a program to calculate volume of cylender by taking radius and height as input from user if user not provide
//values tan default value is r=2,h=6
using namespace std;
#include<iostream>
void volume(int r=2,int h=6);

int main()
{
	int r,h;
	cout<<"enter Radius and Height\n";
	cin>>r>>h;
	volume(r,h);

	volume();
	
}
void volume(int r,int h)
{
	cout<<"volume is="<<3.14*r*r*h<<"\n";
}
