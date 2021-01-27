//declear a class compare which takes 1 data member int a[5] one member function which will get input of array
//overload the plus opertor to perform addition of two objects
using namespace std;
#include<iostream>
class compare

{
	int a[5],i;
	public:
		void get()
		{
			cout<<"Input value of array";
		 for(i=0;i<5;i++)
		 {
		 	cin>>a[i];
		 }	
		}
		
		void operator+(compare ob)
		{
			int j;
			for(j=0;j<5;j++){
			
			cout<<"addition is:"<<a[i]+ob.a[i]<<" ";
		       }
}

};
int main()
{
	compare ob1,ob2;
	ob1.get();
	ob2.get();
	ob1+ob2;
	
}
