//write a program to calculate sum of 1st n no by using recursion
using namespace std;
#include<iostream>
class sum
{
	public:
		int sum_2(int n)
		{
			if(n==0)
			return 0;
			else
			return(n+sum_2(n-1));
			
			
		}
	
};
int main()
{
int n;
sum s;
cout<<"enter any no\n";
cin>>n;
cout<<"sum is:"<<s.sum_2(n);

}

