using namespace std;
#include<iostream>
class student
{
	
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
	cout<<roll<<" "<<name<<" "<<marks<<"\n";
}

	
};
int main()
{
	student s[3];
	int i;
for(i=0;i<3;i++)
	s[i].get();
for(i=0;i<3;i++)
    s[i].show();
}
