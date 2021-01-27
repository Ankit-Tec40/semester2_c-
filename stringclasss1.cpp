using namespace std;
#include<iostream>
int main()
{
	string x;
	cout<<"enter a string:";
	getline(cin,x);
	cout<<"entered string is:"<<x;
	string x1="abc xyz";
	cout<<"\nstring x1 is:"<<x1;
	string x2("def ghi");
	cout<<"\nstring x2 is"<<x2;
	string x3=x2;
	cout<<"\nstring x3 is:"<<x3;
	
	cout<<"\nno of characters in x is:"<<x.length();
		cout<<"\nno of characters in x is:"<<x.size();


}
