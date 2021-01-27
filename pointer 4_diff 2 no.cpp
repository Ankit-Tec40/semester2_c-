using namespace std;
#include<iostream>
int main()
{
	int x[]={56,23,48,5,7};
	int *p1,*p2;
	p1=&x[2];
	p2=&x[3];
	cout<<"diffrence of loc"<<p1-p2;


	cout<<"\ndiffrence="<<" "<<*p1-*p2;
	
}
