//write a program to open a file in read mode and copy its content to another file 
//after replacing all the spaces with $ sign 
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
		
       if(ch==' ')
		ch='$';		
		 ob1.put(ch); 
		ob.get(ch);	
		}
	
	}
}
