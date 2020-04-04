#include<iostream>
#include<conio.h>
using namespace std;
int test;
class base
{
	public:
		int x,y,z;
		void get()
		{
			cin>>x>>y>>z;
		}
};
class derived: public base
{
	
	public:
		int a;
	   using base::x;
		void geta()
		{
			get();
		}
		void put()
		{
			cout<<x;
		}
};
int main()
{
	derived d;
	d.geta();
	d.put();
	return 0;
}

