#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct student
{
	char name[20];
	int marks;
}s;
int main()
{
	int m;
	char fnd='n',w;
	ifstream fil;
	fil.open("student.txt",ios::in);
	cout<<"ENTER THE NEEDED CONDITION FOR SEARCHING:";
	cin>>m;
	while(!fil.eof())
	{
		fil.read((char*)&s,sizeof(s));
		if(s.marks>=m)
		{
			cout<<"\nNAME:"<<s.name<<"\tMARKS:"<<s.marks;
			fnd='y';
		}
	}
	if(fnd=='n')
	cout<<"NO MATCH FOUND";
	fil.close();
	getch();
	return 0;
}

