using namespace std;
#include<iostream>
int main()
{
	int x[]={1,23,4,56,7};
	int *p;
	p=&x[0];
	cout<<p<<" "<<*p;

	p=p-1;
	cout<<"\n"<<p<<" "<<*p;
	
}
