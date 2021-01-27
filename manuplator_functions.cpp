using namespace std;
#include<iostream>
#include<iomanip>
int main()
{
	//endl
	int a=14,b=56,c=12;
	cout<<a<<endl<<b;
	
	//setbase
	cout<<"\n in decimal:"<<setbase(10)<<a;
	cout<<"\n in hexadecimal:"<<setbase(16)<<a;
	cout<<"\n in octal:"<<setbase(8)<<a;
	
	//setw & setfill
	cout<<"\n afre using setw ad setfill:"<<setfill('*')<<setw(8)<<b;
	
	
	//hex,dec,oct
	cout<<"\nin decimal="<<dec<<c;
	cout<<"\nin hexadecimal="<<hex<<c;
	cout<<"\nin octal="<<oct<<c;
	
	//
	float d=4.6753655;
	cout<<"\n"<<setprecision(3)<<d;
		cout<<"\n"<<setprecision(3)<<fixed<<d;

		
	}
