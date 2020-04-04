#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

struct student
{
	char name[20];
	int marks;
}s[5],p;

int i;
void input(student s[])
{
	ofstream fout;
	fout.open("student.txt",ios::app);
	
	for(i=0;i<5;i++)
	{
		
		cout<<"STUDENT "<<"\tNAME:";
		cin>>s[i].name;
		cout<<"\t\tMARKS:";
		cin>>s[i].marks;
		fout<<s[i].name<<'\n'<<s[i].marks<<'\n';
		
	}
	fout.close();
}

void display(student s[])
{
	ifstream filin("student.txt");
	
	cout<<"\n";
	while(!filin.eof())
	{
	
		filin>>p.name;
		filin>>p.marks;
		cout<<"STUDENT NAME:"<<p.name;
		cout<<"\tMARKS:"<<p.marks<<"\n";
	}
	filin.close();
}
int main()
{
	char ans;
	cout<<"ENTER UR CHOICE:";
	cout<<"\nA.INPUT";
	cout<<"\nB.OUTPUT";
	cin>>ans;
	switch(ans)
	{
		case 'a':	input(s);
		       		break;
		case 'b':display(s);
			    	break;
	}
 	getch();
	return 0;
}
