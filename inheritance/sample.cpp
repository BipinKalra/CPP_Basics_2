#include<iostream>
#include<conio.h>
using namespace std;

class person
{
	char name[10];
	int age;
	void dis()
	{
		if(age>18)
			cout<<"\nELIGIBLE";
		else
			cout<<"\nNOT ELIGIBLE";
	}
	public:
		void getdata()
		{
			cout<<"\nENTER NAME:";
			cin.getline(name,10);
			cout<<"\nENTER AGE:";
			cin>>age;
		}
		void putdata()
		{
			dis();
			cout<<"\nNAME:"<<name;
			cout<<"AGE:"<<age;
			convert();
		}
	protected:
		void convert()
		{
			for(int i=0;name[i]!='\0';i++)
				name[i]=name[i]+32;
		}
};

class student:public person
{
	int Class;
	public:
		void getdata1()
		{
			getdata();
			cout<<"\nENTER CLASS:";
			cin>>Class;
		}
		void putdata1()
		{
			putdata();
			cout<<"\nCLASS:"<<Class;
		}
};
int main()
{
	student s;
	s.getdata1();
	s.putdata1();
	getch();
	return 0;
}
