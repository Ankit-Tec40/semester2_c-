using namespace std;
#include<iostream>
#include<fstream>
class student
{
	int roll;
	char name[30];
	public:
		void get()
		{
			cout<<" enter rollno and name\n";
			cin>>roll>>name;
			
		}
		void show()
		{
		cout<<roll<<" "<<name;
			
		}
};
int main()
{
	fstream ob("student.txt",ios::out|ios::binary);
	student s;
	s.get();
	ob.write((char*)&s,sizeof(s));
	ob.close();
	fstream ob1("student.txt",ios::in|ios::binary);
	student s1;
	ob1.read((char*)&s1,sizeof(s1));
	s1.show();
}

