using namespace std;
#include<iostream>
class student
{
	
		static int roll;
		string name;
	
	public:
		static void inc_roll()
		{
			roll++;
		}
		
	 void get()
	 {
	
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
	student::inc_roll();
	s1.show();
	s2.get();
   student::inc_roll();
    s2.show();

	
}

