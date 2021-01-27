//create a class employee with data members id,name and salary
//input the detail using get functin and print it on the screen
using namespace std;
#include<iostream>
class employee                                  //creating classf

{
	private:                                   //private members
		int id;
		string name;
		float salary;
	public:                                      //public member
	 void get()                                  //used for taking input
	 {
	 
	 cout<<"Enter Id,Name and salary\n";
	 cin>>id>>name>>salary;
}
void show()                                    //used for show output
{
	cout<<id<<" "<<name<<" "<<salary;
}

	
};
int main()
{
	employee e;                              //creating object for class
                                       
	e.get();                                 //calling get function
	            
	e.show();                               //calling show function
}
