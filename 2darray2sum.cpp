//check//write a program to input a matrix of 3 rows and 3 columns and calculate the um of left diagonal
//ot that matrix
using namespace std;
#include<iostream>
class matrix
{
	int mat[3][3];
	public:
		void get();
		void show();
};
	void matrix :: get()
	{
		int i,j;
		cout<<"Enter matrix";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			cin>>mat[i][j];
		}
	}
	void matrix :: show()
	{
		int i,j,sum=0;
		cout<<"Entered matrix is:"<<" ";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		   cout<<"\n";
	{
	
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)   
		   if(i==j)
		   {
		   	sum=sum+mat[i][j];
		   }
	}
		cout<<"sum of left diagonal of matrix is:"<<sum;
}
	
	}
	int main()
    {
		matrix m;
		m.get();
		m.show();
	}
