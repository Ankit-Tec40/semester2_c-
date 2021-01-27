using namespace std;
#include<iostream>
class A
{
	private:
		int a;
	public:
		void get()
		{
			cout<<"Enter a\n";
			cin>>a;
		}
	friend class B;
};
class B
{
	int b;
	public:
		void show(A ob)
		{
			b=12;
			cout<<"sum of a and b is:"<<b+ob.a;
		}
	
};
int main()
{
	A ob;
	ob.get();
	B ob2;
	ob2.show(ob);
	
}
