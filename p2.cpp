//declear a structre employ with id,name and salary as data members input a detail of 1 employ by 
//using get function and print the detail using show function
using namespace std;
#include<iostream>
struct employ
{
int id;
string name;
float salary;
void get()
{
	cout<<"enter id,name,salary\n";
	cin>>id>>name>>salary;
}
	void show()
	{
		
		cout<<" "<<id<<" "<<name<<" "<<salary<<"\n";
		
	}
	
	
};
int main()

{
	
	struct employ s[5];
	int i;
	for(i=0;i<5;i++)
	s[i].get();
		for(i=0;i<5;i++)

	s[i].show();
	}

