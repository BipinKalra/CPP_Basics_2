#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	int x;
	public:
		a(int b)
		{
			x=b;
		}
		void puta()
		{
			cout<<"value of x="<<x;
		}
};
class b :public a
{
	int z;
	public:
		b(int c,int d):a(d)
		{
			z=c;
		}
		void putb()
		{
			cout<<"value of Z="<<z;
		}
};
class c:public b
{
	int w;
	public:
		c(int p,int q):b(p,q)
		{};
		void putc()
		{
			puta();
			putb();
		}
};
int main()
{
	c c1(13,5);
	c1.putc();
	getch();
}
