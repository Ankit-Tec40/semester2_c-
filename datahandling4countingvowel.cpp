//write a program to open a file in read mode and count the no of vowels in it
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
		int count=0;
		char ch;
		ob.get(ch);
		while(ob.eof()==0)
		{
			
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		count++;
		ob.get(ch);	
		}
		cout<<"no of vowel="<<count;
	
	}
}
