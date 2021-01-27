//class employee with id,name,department,salary initialize the data members by using paramaterised constructor and print the value
//paramaterized constructors
using namespace std;
#include<iostream>
class employee

{

	int id;
	string name;
	string dep;
	float salary;
	public:
		employee(int i,string n,string d,float s)
		{
		id=i;
		name=n;
		dep=d;
		salary=s;	
		}
	void show()
	{
		cout<<id<<" "<<name<<" "<<dep<<" "<<salary;
		
		
			}
};

int main()
{
	int i;
	string n,d;
	float s;
	cout<<"enter id,name,department and salary\n";
	
	cin>>i>>n>>d>>s;
	employee e(i,n,d,s);
	e.show();
	
}
