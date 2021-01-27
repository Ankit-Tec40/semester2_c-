//function with default arguments
using namespace std;
#include<iostream>
void sum(int a=5,int b=8,int c=10);
int main()
{
	sum();
	sum(1);
	sum(1,2);
	sum(1,2,3);
}
void sum(int a,int b,int c)
{
	cout<<"\n sum is:"<<a+b+c;
}
