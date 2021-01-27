//constructor with default values
using namespace std;
#include<iostream>
class rectangle
{
	int l,b;
	public:
		rectangle(int x,int y=2)
		{
			l=x;
			b=y;
				cout<<"Area="<<l*b<<"\n";

		}


};
int main()
{
	rectangle r1(5);
	
	}
