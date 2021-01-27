using namespace std;
#include<iostream>
class abc
{
	int a,b,c;
	public:
		void sum(int a,int b);
		void sum(int a,int b, int c);
		
};

void abc :: sum(int a,int b)
{
	cout<<"sum of 2 ints"<<a+b<<"\n";
}
void abc :: sum(int a,int b,int c)
{
	cout<<"sum of 3 ints"<<a+b+c<<"\n";
}
int main()
{
	abc ob;
	ob.sum(2,3);
    ob.sum(3,4,5);
}
		
		
