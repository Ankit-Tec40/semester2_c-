//defing member function outside the class


using namespace std;
#include<iostream>
class employee                                 

{
	private:                                   
			int id;
		string name;
		float salary;
	public:                                      
	
	 void get();                                 

    void show();                                   
	
};

void employee::get()
{
	 cout<<"Enter Id,Name and salary\n";
	 cin>>id>>name>>salary;
}
void employee::show()
{
	cout<<id<<" "<<name<<" "<<salary;
 
}
int main()
{
	employee e;                              //creating object for class
                                       
	e.get();                                 //calling get function
	            
	e.show();                               //calling show function
}
