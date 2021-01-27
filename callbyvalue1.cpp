using namespace std;
#include<iostream>
void show(int a);
int main()
{
	int x=12;
	cout<<"x before call:"<<x<<"\n";
	show(x);
	cout<<"x after call:"<<x;
}
void show(int a)
{
	a=a+1;
}
