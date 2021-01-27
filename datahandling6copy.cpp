//write a program to copy the content of 1 file to another file
using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ifstream ob("hacking.txt");
	ofstream ob1("copy.txt");
	if(ob==NULL)
	{
		cout<<"file not opened";
	}
	else
	{
	
		char ch;
		ob.get(ch);
		while(ob.eof()==0)
		{
		 ob1.put(ch);
		 
		ob.get(ch);	
		}
	
	}
}
