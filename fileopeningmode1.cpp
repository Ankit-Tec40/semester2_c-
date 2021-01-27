//write a program to declear a class student with rollno ,name and marks 
//input the detail of 5 students on to the file student.txt and read the content from file student.txt

using namespace std;
#include<iostream>
#include<fstream>
class student
{
	int roll;
	char name[30];
	float marks;
	public:
		void get()
		{
			cout<<"Enter Roll,Name and Marks\n";
			cin>>roll>>name>>marks;
			
		}
		void show()
		{
			cout<<roll<<" "<<name<<" "<<marks<<"\n";
			
		}
};
int main()
{
	student s[5];
	int i;
	fstream ob("student.txt",ios::out|ios::binary);
	
	for(i=0;i<=4;i++)
	{
		s[i].get();
		ob.write((char*)&s[i],sizeof(s[i]));
	}
	ob.close();
	
	fstream ob1("student.txt",ios::in);
	student t[5];
for(i=0;i<=4;i++)
{
	ob1.read((char*)&t[i],sizeof(t[i]));
	t[i].show();
}

}
