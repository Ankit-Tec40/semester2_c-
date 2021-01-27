using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ofstream ob("K19BY2.txt");
	if(ob==NULL)
	{
		cout<<"file not opened";
	}
	else
	{
		ob<<"my name is Ankit";
		ob<<"\nI am from Bihar";
		
	}
	
}
