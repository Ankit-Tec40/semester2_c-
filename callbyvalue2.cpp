using namespace std;
#include<iostream>
void swap(int a,int b);
int main()
{
	int x=1,y=5;
	cout<<"x before call:"<<x<<y<<"\n";
	swap(x,y);
	cout<<"x after call:"<<x<<y;
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
}
