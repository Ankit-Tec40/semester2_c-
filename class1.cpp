using namespace std;
#include<iostream>```
class student
{
	private:
		int roll;
		string name;
		float marks;
	public:
	 void get()
	 {
	 
	 cout<<"Enter Rollno,Name,Marks\n";
	 cin>>roll>>name>>marks;
}
void show()
{
	cout<<roll<<" "<<name<<" "<<marks;
}

	
};
int main()
{
	student s;

	s.get();
	s.show();
}
