//Hierarchical inheritance
using namespace std;
#include<iostream>
class person{
	protected:
		string name;
		string city;

};
class student:public person
{
	int roll;
	public:
		void get()
		{
			cout<<"Enter roll,name and city\n";
			cin>>roll>>name>>city;
		}
		void show()
		{
			cout<<"\n"<<roll<<" "<<name<<" "<<city;
		}
};
class teacher:public person
{
	int u_id;
	public:
		void get()
		{
			cout<<"Enter u_id,name and city\n";
			cin>>u_id>>name>>city;
		}
		void show()
		{
			cout<<"\n"<<u_id<<" "<<name<<" "<<city;
		}
	};
int main()
{
student s;
s.get();
s.show();
teacher t;
t.get();
t.show();
}
