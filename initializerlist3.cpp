using namespace std;
#include<iostream>
class abc
{
	const int x;
	public:
	abc(int a):x(a)
		{
			
		}
	void show()
	{
		cout<<x;
		
	}
};
int main()
{
    abc ob(34);
    ob.show();
	
}
