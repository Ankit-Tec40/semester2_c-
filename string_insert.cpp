using namespace std;
#include<iostream>
int main()
{
string x="abfghij";
//insert()
x.insert(2,"cde");
cout<<"x is:"<<x;
//erase()
x.erase(2,3);
cout<<"\nx after delete:"<<x;
}
