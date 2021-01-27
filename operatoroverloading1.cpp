//write a program to overload uniry increment operator
//to increase the value of object by 1
using namespace std;
#include<iostream>
class increase
{
	int x,y;
	public:
		increase()
		{
			x=y=0;
			cout<<"initial value="<<x<<" "<<y;
		
		}
	void operator ++()
	{
		x=x+1;
		y=y+1;
		cout<<"\n increased x and y="<<x<<" "<<y;
	}
};
int main(){
	increase ob;
	++ob;
}
