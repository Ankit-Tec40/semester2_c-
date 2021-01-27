using namespace std;
#include<iostream>
int main()
{
int x=2;
int &r=x;
cout<<x<<r<<"\n";
x++;
cout<<x<<r<<"\n";
r++;
cout<<x<<r<<"\n";
	
}

