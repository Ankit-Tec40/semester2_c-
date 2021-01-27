using namespace std;
#include<iostream>
void show(int &a,int &b);
int main()
{
	int x=1,y=5;
	cout<<"x before call:"<<x<<y<<"\n";
	show(x,y);
	cout<<"x after call:"<<x<<y;
}
void show(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
}
