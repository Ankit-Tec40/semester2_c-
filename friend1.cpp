
using namespace std;
#include<iostream>
class employee
{
  int id;
	string name;
	float salary;
	public:
	void get()
	{
	cout<<"enter id,name and salary\n";
		cin>>id>>name>>salary;
			}
	friend void show(employee ob);
	};
void show(employee ob)
	{
		cout<<ob.id<<" "<<ob.name<<" "<<ob.salary<<"\n";
			}
int main()
{
	employee e;
	e.get();
	show(e);	
}

