//write a prtogram to input a no and print the table of that no on to the file table.txt
using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	int i,table,n;
	cout<<"Enter a no=";
		cin>>n;
	ofstream ob("table.txt");
	if(ob==NULL)
	{
		cout<<"file not opened";
		
	}
	else
	{
		
		for(i=1;i<=10;i++)
		{
		
		table=n*i;
		ob<<table<<"\n";
	}
	}
}
