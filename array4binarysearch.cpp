//recheck//write program to input an array of 10 elements and search an element by using binary search
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
	int i,s,beg=0,end=9,mid;
	cout<<"Entered the element to search\n";
	cin>>s;
	mid=(beg+end)/2;
	while(beg<=end)
{
	if(s==a[mid])
	{
		cout<<"search found";
		break;
	}
	else if(s>a[mid])
	beg=mid+1;
	else
	end=mid+1;
	mid=(beg+end)/2;
	}
	if(beg>end)
	cout<<"search not found";	
	
}
int main(){
	array a;
	a.get();
	a.show();
}
