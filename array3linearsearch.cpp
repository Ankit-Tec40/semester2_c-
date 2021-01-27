//write a program to input an array of 10 integers and search an element by using linear search method
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
	int i,s,flag=0;
	cout<<"Enter the element to search\n";
	cin>>s;
	for(i=0;i<9;i++)
	{
		if(a[i]==s)
		{
			flag=1;
			break;
			
		}
	}
	if(flag==1)
	cout<<"search found at"<<" "<<i+1<<" "<<"position";
	else
	cout<<"search not found";
	
	
	
}

	int main(){
	array a;
	a.get();
	a.show();
}
