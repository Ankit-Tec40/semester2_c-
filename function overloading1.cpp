using namespace std;
#include <iostream>
void add(int a,int b);
void add(int a,int b,int c);

void add(float a,float b);
int main()
{
   add(12,45);
   add(12,45,67);
   add(13.34f,56.78f);	
}
void add(int a,int b)
{
	cout<<"sum of 2 int"<<a+b;
	
}
void add(int a,int b, int c)
{
	cout<<"sum of 3 int"<<a+b+c;
	
}
void add(float a,float b)
{
	cout<<"sum of 2 float"<<a+b;
	
}


