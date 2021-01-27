//input a matrix 3*3 and calculate the sum of all even elementa among them
//write a program to enter two matrixes of 3*3 ang calculate the sum of all matrixes

using namespace std;
#include<iostream>
class sum
{
	int mat1[3][3];
	public:
		void get();
		void show();
};
void sum :: get()
{
	int i,j;
	cout<<"Enter value for 1st matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	cin>>mat1[i][j];

	
}
}
void sum :: show()
{
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
  
  if(mat1[i][j]%2==0)
  sum=sum+mat1[i][j];
		
	}
	
	
	
	cout<<"sum of even elements is:"<<sum;
	
	
	
}
int main()
{
	sum s;
	s.get();
	s.show();
}
