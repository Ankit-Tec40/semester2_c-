//writa aprogram to make a class with id,name and ,salary,input the detail of 2 employees
//and print it........id should static
using namespace std;
#include<iostream>
class employee
{
	static int id;
	string name;
	float salary;
	public:
	void get()
	{
		id++;
		cout<<"enter name and salary\n";
		cin>>name>>salary;
		
	}
	void show()
	{
		cout<<id<<" "<<name<<" "<<salary<<"\n";
			
	}
};
int employee::id=11907131;
int main()
{
	employee e1,e2;
	e1.get();
	e1.show();
	e2.get();
	e2.show();
	
	
}

