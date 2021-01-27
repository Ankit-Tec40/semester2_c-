//write a program to input an array of 10 elements and calculate the sum of all even elements present in the arrar
using namespace std;
#include<iostream>
class array
{
	int a[10];
	public:
		void get();
		void show();
};
void array :: get()
{
	int i;
	cout<<"Enter the array\n";
	for(i=0;i<9;i++)
	cin>>a[i];
	
}
void array :: show()
{
	int i,sum=0;
	cout<<"Entered the array is\n";
{
	for(i=0;i<9;i++)
	if(a[i]%2==0)
	sum=sum+a[i];
}
	cout<<sum;
	
}
int main()
{
	array a;
	a.get();
	a.show();
}
