//write a program to open a file in read mode and copy its content to another file
// after converting all small letter to capital letters
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
	int i,j;
		char ch;
		ob.get(ch);
		while(ob.eof()==0)
		{
		 if(ch>='a'&&ch<='z')
		 {
		 
		  ch=ch-32;
	}
				
		 ob1.put(ch);
		 
		ob.get(ch);	
		}
	
	}
}
