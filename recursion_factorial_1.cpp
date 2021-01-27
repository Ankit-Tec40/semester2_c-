//calculate factorial by using recursion function
using namespace std;
#include<iostream>
class factorial
{
	
	public:
		int calc_fact(int n)
		{
			if(n==1||n==0)
			return 1;
			else
			return(n*calc_fact(n-1));
			
			
		}
	
};
int main()
{
	factorial f;
	int n;
	cout<<"Enter no\n";
	cin>>n;
	cout<<"Factorial is:"<<f.calc_fact(n);
	
}

