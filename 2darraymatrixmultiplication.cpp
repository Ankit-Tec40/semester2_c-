//write a program to enter two matrixes of 3*3 ang calculate the multiplication of all matrixes

using namespace std;
#include<iostream>
class sum
{
	int mat1[3][3],mat2[3][3],mat3[3][3];
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
	cout<<"Enter value for 2nd matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	cin>>mat2[i][j];
		
	}
	
	
}




void sum :: show()
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
        mat3[i][j]=0;
        for(k=0;k<3;k++)
        {
        	mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
		}
		
	}
	
	
	
	
	
	
	cout<<"multiplication is";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
cout<<mat3[i][j];
	cout<<"\n";	
	}
	
}
int main()
{
	sum s;
	s.get();
	s.show();
}
