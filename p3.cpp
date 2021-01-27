//declear a structure book with name ,author,,pages,and price as data members 
//input the detail of 5 books using get member function and print those books having prise greater
//than 500
using namespace std;
#include<iostream>
struct book
{
	string name,author;
	int pages;
	float price;
	void get(){
		
		cout<<"Enter name, Author Name,No of pages,And price\n";
		cin>>name>>author>>pages>>price;

	}
void show(){
	
	if(price>500)
	
	cout<<name<<" "<<author<<" "<<pages<<" "<<price<<"\n";
	
	
}	
	
};
int main()
{
	struct book b[5];
	int i;
	for(i=0;i<5;i++)
	b[i].get();
		for(i=0;i<5;i++)

	b[i].show();
	
	
	
}


