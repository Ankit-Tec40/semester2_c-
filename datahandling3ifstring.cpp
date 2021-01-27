using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ifstream ob("hacking.txt");
	if(ob==NULL)
	{
		cout<<"fILE NOT OPENED";
	}
	else
	{
		char ch;
		ob.get(ch);
		while(ob.eof()==0)
		{
			cout<<ch;
			ob.get(ch);
		}
	}
}

