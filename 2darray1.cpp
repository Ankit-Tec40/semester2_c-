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
		int i,j;
		cout<<"Entered matrix is:"<<" ";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		
		cout<<"\n";
	}
	}
	int main()
	{
		matrix m;
		m.get();
		m.show();
	}
