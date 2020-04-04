#include<iostream>
#include<conio.h>
using namespace std;

class a
{
	int x,y;
	public:
		a()
		{
			cout<<"DEFAULT CONSTRUCTOR\n";
			x=10;y=20;
			getch();
		}
		a(int a,int b)	
		{
			cout<<"PARAMETERIZED CONSTRUCTOR\n";	
			x=a+5;
			y=b-5;
			getch();
		}
		void show()
		{
			cout<<x<<" "<<y<<endl;getch();
		}
		void in()
		{
			x+=10;
			y--;getch();
		}
		a(a &obj);
		~a()
		{
			cout<<"DEFAULT DESTRUCTOR"<<endl;getch();
		}
		
};
a::a(a &obj)
{
	cout<<"COPY CONSTRUCTOR\n";
	x=obj.x;
	y=obj.y;
	getch();
}
a glob;
int main()
{
	a obj1;
	obj1.in();
	obj1.show();
	a obj2(5,10);
	obj2.show();
	a obj3=obj2;
	obj3.show();
	getch();
	return 0;
}
