//program to overload post increment operator by using operator overloading

using namespace std;
#include<iostream>
class abc
{
	int x,y;
	public:
		abc(int a,int b)
		{
			x=a;
			y=b;
			cout<<"before increase x and y are"<<x<<" "<<y;
	
		}
		void operator ++(int)
		{
			
			x=x+1;
			y=y+1;
			cout<<"\nafter increasing x and y are"<<x<<" "<<y;
		}
};
int main()
{
	abc ob(12,34);
	ob++;
}
