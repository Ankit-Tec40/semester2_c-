//write a program declear a task employee with id,name ,salary and depARTMENT
//input the detail of 5 employee ,print that employee having salary greater than 15000

using namespace std;
#include<iostream>
class employee                                

{
	private:                                 
		int id;
		string name;
		string dep;
		float salary;
	public:                                 
	 void get()                              
	 {
	 
	 cout<<"Enter Id,Name,department and salary\n";
	 cin>>id>>name>>dep>>salary;
}
void show()                           
{
	if(salary>15000)
	cout<<id<<" "<<name<<" "<<dep<<" "<<salary<<"\n";
}

	
};
int main()
{
	employee e[5];
	int i;
for(i=0;i<5;i++)                           
                                       
	e[i].get();                                
for(i=0;i<5;i++)                              
    
	e[i].show();                              
}
