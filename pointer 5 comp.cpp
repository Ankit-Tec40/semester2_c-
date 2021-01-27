using namespace std;
#include<iostream>
int main()
{
	int x[]={56,23,48,5,7};
	int *p1,*p2;
	p1=&x[3];
	p2=&x[3];
	if(p1==p2)
	cout<<"Two pointers points to same location";
     
else
	cout<<"Two pointers do not points to same location";
	cout<<*p1;
}
