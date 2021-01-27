//write a program to print first n ficonacic term using recursion(o,1,1,2,3,5,8,13......)
using namespace std;
#include<iostream>
class fabonacci
{
	public:
		int f_series(int n)
		{
		if(n==1)
		return 0;
		else if(n==2)
		return 1;
		else
		return(f_series(n-1)+f_series(n-2));
			
		}
		
	};
	int main()
	{
		fabonacci f;
		int n,i;
		cout<<"Enter no of terms:";
		cin>>n;
		for(i=1;i<=n;i++)
		
		cout<<"the series is:"<<f.f_series(i)<<"\n";
	
	}
	
