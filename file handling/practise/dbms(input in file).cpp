#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	fstream filout;
	filout.open("marks.dat",ios::app|ios::out);
	char ans,ch;
	int rollno,marks,i;
	do
	{
		cout<<"\nENTER ROLL NO.:";
		cin>>rollno;
		cout<<"\nENTER MARKS:";
		cin>>marks;
		cin.get(ch);
		filout<<'\n'<<"roll.no:"<<rollno<<'\t'<<"marks:"<<marks<<'\n';
		cout<<"\nWANT TO ENTER MORE RECORDS(y/n):";
		cin>>ans;
	}
	while(ans!='n');
	filout.close();


	getch();
	return 0;
}
