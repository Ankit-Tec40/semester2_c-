//write a program to declear a class multiply which takes 3 data members x,y and z
//overload the miultiply and divide operator to perform multiplication and division of 2 objects
//using friend function
using namespace std;
#include<iostream>
class multiply
{
    int x,y,z;
    public:
    	
		void get()
		{
		cout<<"Enter x and y:";
    	cin>>x>>y;
        }
        friend void operator*(multiply ob1,multiply ob2);
        friend void operator/(multiply ob1,multiply ob2);

};
void operator*(multiply ob1,multiply ob2)
{
	cout<<"multiplication is:"<<ob1.x*ob2.x<<" "<<ob2.y*ob2.y;
	
}
void operator/(multiply ob1,multiply ob2)
{
	cout<<"\ndivision is:"<<ob1.x/ob2.x<<" "<<ob1.y/ob2.y;
	
}
int main()
{
	multiply ob1,ob2;
	ob1.get();
	ob2.get();
	ob1*ob2;
	ob1/ob2;
}
