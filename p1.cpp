using namespace std;
#include<iostream>
struct student
{
int roll;
string name;
float marks;
void get()
{
	cout<<"enter roll,name,marks\n";
	cin>>roll>>name>>marks;
}
	void show()
	{
		
		cout<<" "<<roll<<" "<<name<<" "<<marks;
		
	}
	
	
};
int main()
{
	
	struct student s;
	s.get();
	s.show();
	}

