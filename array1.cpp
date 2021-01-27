using namespace std;
#include<iostream>
class array
{
	int a[10];
	public:
		void get();
		void show();
};
void array :: get()
{
	int i;
	cout<<"Enter the array\n";
	for(i=0;i<9;i++)
	cin>>a[i];
	
}
void array :: show()
{
	int i;
	cout<<"Entered the array is\n";
	for(i=0;i<9;i++)
	cout<<a[i]<<" ";
	
}
int main(){
	array a;
	a.get();
	a.show();
}
