//write a program to overload uniry pre decrement operatop to decrease the value of 2 objects by 1

using namespace std;
#include<iostream>
class decrease
{
	int x,y;
	public:
		decrease()
		{
			x=y=10;
			cout<<"\ninitial value="<<x<<" "<<y;
		
		}
	void operator --()
	{
		x=x-1;
		y=y-1;
		cout<<"\n decreased x and y="<<x<<" "<<y;
	}
};
int main(){
	decrease ob1;
	--ob1;
	decrease ob2;
	--ob2;
}
