using namespace std;
#include<iostream>
class abc
{
	int x,y;
	public:
		void get()
		{
			cout<<"enter x and y\n";
			cin>>x>>y;
		}
		friend void operator+(abc ob1,abc ob2);
		
};
void operator+(abc ob1,abc ob2)
{
	cout<<"addition of data members are="<<ob1.x+ob2.x<<" "<<ob1.y+ob2.y;
}
int main()
{
	abc ob1,ob2;
	ob1.get();
	ob2.get();
	ob1+ob2;
}
