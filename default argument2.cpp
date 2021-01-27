//write a program to calculate simple interest by taking principle,rate and,time as input from user
//if the user is not proving rate of interest than by default 6 should be takenup
using namespace std;
#include<iostream>
void interest( int p,int t,int r=6);
int main()
{
	int p,t,r;
	cout<<"Enter principle,time and rate\n";
	cin>>p>>t>>r;
	interest(p,t,r);
	interest(p,t);
}
void interest(int p,int t,int r)
{
	cout<<"simple interest="<<(p*r*t)/100<<"\n";
}
