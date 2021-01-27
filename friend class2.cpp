using namespace std;
#include<iostream>
class student
{
	private:
		int roll;
		string name;
		float marks;
	public:
		void get()
		{
			cout<<"Enter Rollno,Name and Marks\n";
			cin>>roll>>name>>marks;
		}
	friend class abc;
};
class abc
{

	public:
		void show(student ob)
		{
			
			cout<<ob.roll<<" "<<ob.name<<" "<<ob.marks;
		}
	
};
int main()
{
	student s;
	s.get();
	abc ob2;
	ob2.show(s);
	
}
