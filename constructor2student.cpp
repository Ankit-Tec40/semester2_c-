//write a program to declear a class student with rollno,name and marks initialize the data member bu using default constructor and prin
//and print the values
using namespace std;
#include<iostream>
class student
{
	int roll;
	string name;
	float marks;
	public:
		student()
		{
			roll=1;
			name="ram";
			marks=80.4f;
		}
		void show()
		{
			cout<<roll<<" "<<name<<" "<<marks;
			
		}
};
int main()
{
	student s;
	s.show();
}
