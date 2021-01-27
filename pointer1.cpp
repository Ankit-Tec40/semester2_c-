using namespace std;
#include<iostream>
int main()
{
	int x=12;
	int *p;

	p=&x;
	cout<<p;
	cout<<"\n"<<&x;
	cout<<"\n"<<*p;
	*p=*p+1;
	cout<<"\n"<<*p<<" "<<x;
	
}
