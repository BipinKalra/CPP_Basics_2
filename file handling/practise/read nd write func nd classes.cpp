#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

class student
{
		char name[40];
		char grade;
		float marks;
	public:
		void getdata(void);
		void display(void);
};
void student::getdata(void)
{
	char ch;
	cin.get(ch);
	cout<<"\nENTER NAME:";
	cin.getline(name,40);
	cout<<"\nENTER GRADE:";
	cin>>grade;
	cout<<"\nENTER MARKS:";
	cin>>marks;
}

void student::display(void)
{
	cout<<"\nNAME:"<<name<<"\t";
	cout<<"GRADE:"<<grade<<"\t";
	cout<<"MARKS:"<<marks<<"\t";
}
int main()
{
	student arts[3];
	fstream filin;
	int i;
	filin.open("classrecord.txt",ios::in|ios::out);
	cout<<"\nENTER DETAILS OF 3 STUDENTS:\n";
	for(i=0;i<3;i++)
	{
		arts[i].getdata();
		filin.write((char*)&arts[i],sizeof(arts[i]));
		
	}
	cout<<"THE CONTENTS OF FILE ARE:\n";
	for(i=0;i<3;i++)
	{
			filin.read((char*)&arts[i],sizeof(arts[i]));
			arts[i].display();
	
	}
	filin.close();
	getch();
	return 0;
}
