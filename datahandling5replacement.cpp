//write a program to open a file in read mode and print its content on to the screen after replacing all the spaces with doller sign
using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ifstream ob("hacking.txt");
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
			
		if(ch==' ')
		ch='$';
		cout<<ch;
	
		ob.get(ch);	
		}
		cout<<"no of vowel="<<count;
	
	}
}
