using namespace std;
#include<iostream>
class abc
{
	public:
		abc()//constructor
		{
			cout<<"constructor called\n";
			
		}
	~abc()//destructor
	{
		cout<<"destructor called\n";
		
		
	}
	
};
int main()
{
	abc ob;
	{
	
		abc ob1;
    }
	
	abc ob2;
	
}
