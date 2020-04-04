#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;

class student
{
	int rno;
	char name[10];
	float marks[5];
	char status[5];
	float percent;
	public:
		
		void get();
		void put();
		float sum();
		char* result();
		void modify();
};
void student::get()
{
		cout<<"ENTER ROLL NO.:";
		cin>>rno;
		cout<<"ENTER NAME:";
		cin.ignore();	
		cin.getline(name,10);
		cout<<"\nENTER MARKS IN 5 SUBJECTS:";
		for(int i=0;i<5;i++)
			cin>>marks[i];
		result();
		
}
void student::put()
{
		cout<<"\n\nROLL NO.:"<<rno;
		cout<<"\nNAME:"<<name;
		cout<<"\nMARKS IN 5 SUBJECTS:";
		for(int i=0;i<5;i++)
			cout<<marks[i]<<",";
		cout<<"\nPERCENTAGE:"<<percent<<"%";
		cout<<"\nSTATUS:"<<status;
}
float student::sum()
{
	float total=0;
	for(int i=0;i<5;i++)
		total+=marks[i];
	return total;
}
char* student::result()
{
	
	percent=sum()/5;
	if(percent>=33)
		strcpy(status,"PASS");
	else
		strcpy(status,"FAIL");
	return status;
}
void student::modify()
{
	percent+=10;	
}
void write()
{
	ofstream fout;
	fout.open("student.dat",ios::out|ios::app|ios::binary);
	student s;
	char ans;
	do
	{
		s.get();
		fout.write((char*)&s,sizeof(s));
		cout<<"\nDO U WANT TO ADD MORE:";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
	fout.close();
}
void read()
{
	ifstream fin;
	fin.open("student.dat",ios::binary);
	student s;
	while(fin.read((char*)&s,sizeof(s)))
	{
		
		s.put();
	}
	fin.close();
}
void pass()
{
	ifstream fin;
	fin.open("student.dat",ios::in|ios::binary);
	student s;
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(!strcmp(s.result(),"PASS"))
			s.put();
	}
	fin.close();
}
void grace()
{
	fstream f;
	f.open("student.dat",ios::in|ios::binary|ios::out);
	student s;

	while(f.read((char*)&s,sizeof(s)))
	{
		if(!strcmp(s.result(),"FAIL")==0)
			{
				s.modify();
				
				f.seekp(-1*sizeof(s),ios::cur);
				f.write((char*)&s,sizeof(s));
				f.seekp(-1*sizeof(s),ios::cur);
				f.read((char*)&s,sizeof(s));
				s.put();
				
			}
	}
}
void copy()
{
	ifstream fin;
	ofstream fout;
	student s;
	fin.open("student.dat",ios::binary);
	fout.open("fail.dat",ios::binary);
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(!strcmpi(s.result(),"FAIL"))
			fout.write((char*)&s,sizeof(s));
	}
	
}

int main()
{
	int ans;
	cout<<"MENU:\n";
	cout<<"1.ADD RECORDS\n";
	cout<<"2.DISPLAY RECORDS\n";
	cout<<"3.RECORD OF PASSED STUDENTS\n";
	cout<<"4.GRACE\n";
	cout<<"5.COPY DETAILS OF FAILED STUDENTS TO OTHER FILE\n";

	cout<<"ENTER YOUR CHOICE:";
	cin>>ans;
	switch(ans)
	{
		case 1:write();break;
		case 2:read();break;
		case 3:pass();break;
		case 4:grace();break;
		case 5:copy();break;
		
		default:cout<<"INVALID CHOICE";
	}
	getch();
	return 0;
}
