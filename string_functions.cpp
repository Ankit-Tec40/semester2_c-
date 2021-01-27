using namespace std;
#include<iostream>
int main()
{
string x="abfghij";
string x1=x;
//insert()
x.insert(2,"cde");
cout<<"\nx after inserting is:"<<x;
//erase()
x.erase(2,3);
cout<<"\nx after delete:"<<x;
//replace()
x.replace(2,3,"***");
cout<<"\nx after replacing:"<<x;
//swap()

string x2="klmnop";
x1.swap(x2);
cout<<"\nafter swaping x1:"<<x1<<" ,"<<"x2:"<<x2;
//find()
string x3="qwertyuiop";
cout<<"\n"<<x.find("ty");

//at()
cout<<"\n at no 2 :"<<x3.at(2);
//substr()
cout<<x3.substr(1,3);

}
