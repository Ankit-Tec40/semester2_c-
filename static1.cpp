using namespace std;
#include<iostream>
class student
{
	
		static int roll;
		string name;
		float marks;
	public:
	 void get()
	 {
	 roll++;
	 cout<<"Enter Name\n";
	 cin>>name;
}
void show()
{
	cout<<roll<<" "<<name<<"\n";
}
};
int student :: roll=0;
int main()
{
	student s1,s2,s3;
	s1.get();
	s1.show();
	s2.get();
	s2.show();
	s3.get();
	s3.show();	
	
}

