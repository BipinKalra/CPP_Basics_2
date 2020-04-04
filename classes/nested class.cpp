#include<iostream>
#include<conio.h>
using namespace std;

class outer
{
	int a;
	class inner
	{
			int b;
		public:
			int c;
			void prn()
			{
				cout<<"inINNER::prn()"<<endl;
				cout<<b<<" "<<c<<endl;
			}
			inner()
			{
				b=5;
				c=10;
			}
	};
			inner ob1;
		public:
			inner ob2;
			void second()
			{
				cout<<endl<<"OUTER::second()"<<endl;
				cout<<" "<<ob2.c<<endl;
				cout<<"A="<<a<<endl;
			}
			outer()
			{
				a=25;
			}
	
};
int main()
{
	outer ab;

	ab.second();
	ab.ob2.prn();
	getch();
	return 0;
}
