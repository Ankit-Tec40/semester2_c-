//declear a class rectangle with lrength and breadth as data members input 
//length and breadth using get function and calculate the area by using the area member function 
//define member function outside the class

using namespace std;
#include<iostream>
class rectangle
{
	private:
		float l,b;
	public:
		void get();
		void area();
		
};
void rectangle::get()

{
	
	cout<<"Enter length and Breadth\n";
	cin>>l>>b;
	
}
void rectangle::area()
{
	
	cout<<"Area="<<l*b;
}

int main()
{
	
	rectangle r;
	r.get();
	r.area();	
}
