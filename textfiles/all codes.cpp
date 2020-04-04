#include<iostream>
#include<conio.h>
#include<fstream>
#include<ctype.h>
#include<string.h>
using namespace std;

void para()
{
	ofstream fout;
	fout.open("writing.txt",ios::app);
	char para[100];
	cout<<"ENTER CONTENT:";
	cin.getline(para,100,'$');
	fout<<para;
	fout.close();
}
void line()
{
	ofstream fout;
	fout.open("writing.txt",ios::app);
	char line[50],ans;
	do
	{
		cout<<"ENTER LINE CONTENT:";
		cin.ignore();
		cin.getline(line,100);
		fout<<line<<endl;
		cout<<"DO YOU WANT TO ADD MORE:";
		cin>>ans;
	}while((ans=='y')||(ans=='Y'));
	fout.close();
}
void character()
{
	ofstream fout;
	fout.open("writing.txt",ios::app);
	char ch,ans;
	do
	{
		cout<<"ENTER CONTENT:";
		cin.ignore();
		cin.get(ch);
		fout<<ch<<" ";
		cout<<"DO YOU WANT TO ADD MORE:";
		cin>>ans;
	}while((ans=='y')||(ans=='Y'));
	fout.close();
}
void writingmenu()
{
	char ans;
	int ch;
	do
	{
		system("cls");
		cout<<"SUB MENU:";
		cout<<"\n1.PARA WISE.";
		cout<<"\n2.LINE BY LINE.";
		cout<<"\n3.CHARCTER BY CHARACTER.";
		cout<<"\nENTER YOUR CHOICE:";
		cin>>ch;
		switch(ch)
		{
			case 1:para();
				break;
			case 2:line();
				break;
			case 3:character();
				break;
			default:cout<<"WRONG CHOICE..";
		}
		cout<<"DO YOU WANT TO REVISIT WRITING MENU..";
		cin>>ans;
		}while(ans=='y');
					
					
}
/*********************************************/
void read()
{
	ifstream fin("writing.txt");
	char c;
	while(fin.get(c))
		cout<<c;
	fin.close();
}
void count()
{
	ifstream fin("writing.txt");
	char ch;
	int a=0,l=0,s=0,t=0,v=0,c=0;
	while(fin.get(ch))
	{
		if(isalpha(ch))
		{
			a++;
			switch(ch)
			{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':v++;
					break;
				default:c++;
			}
		}	
		else if(ch==' ')	
			s++;
		else if(ch=='\t')
			t++;
		else if(ch=='\n')
			l++;
	}
		
		cout<<"\nNO OF ALPHABETS:"<<a;
		cout<<"\nNO OF VOWELS:"<<v;
		cout<<"\nNO OF CONSONANTS:"<<c;
		cout<<"\nNO OF SPACES:"<<s;
		cout<<"\nNO OF TABS:"<<t;
		cout<<"\nNO OF LINES:"<<l;
		
	fin.close();
}
void toggle()
{
	ifstream fin("writing.txt");
	char c;
	
	while(fin.get(c))
	{
		if(islower(c))
			c=toupper(c);
		else if(isupper(c))
			c=tolower(c);
		cout<<c;
	}
	fin.close();
}
void searchword(char word[])
{
	ifstream fin("writing.txt");
	char w[20];
	int cnt=0;
	while(fin>>w)
	{
		if(strcmpi(w,word)==0)
			cnt++;
	}
		cout<<"NO OF OCCURENCE OF THE WORD "<<word<<"is/are "<<cnt<<" times.";
	fin.close();
}
void searchletter(char l)
{
	ifstream fin("writing.txt");
	char w[20];
	int cnt=0;
	while(fin>>w)
	{
		if(w[0]==l)
			cnt++;
	}
	cout<<"NO OF WORDs STARTING WITH  "<<l<<" are "<<cnt;
	fin.close();
}
void countword(int len)
{
	ifstream fin("writing.txt");
	char w[20];
	int cnt=0;
	while(fin>>w)
	{
		if(strlen(w)==len)
			cnt++;
	}
	cout<<"NO OF "<<len<<" LETTER WORDS"<<" are "<<cnt;
	fin.close();
}
void readingmenu()
{
	char ans;
	int ch;
	do
	{
		system("cls");
		cout<<"SUB MENU:";
		cout<<"\n1.READ.";
		cout<<"\n2.FILE STATISTICS.";
		cout<<"\n3.TOGGLE CASE.";
		cout<<"\n4.OCCURENCE OF A WORD.";
		cout<<"\n5.WORDS STARTING FROM A LETTER.";
		cout<<"\n6.NO OF WORDS.";
		cout<<"\nENTER YOUR CHOICE:";
		cin>>ch;
		switch(ch)
		{
			case 1:read();
				break;
			case 2:count();
				break;
			case 3:toggle();
				break;
			case 4:	char word[15];
					cout<<"\nENTER WORD TO FIND:";
					cin>>word;
					searchword(word);
				break;
			case 5:char l;
					cout<<"ENTER STARTING LETTER:";
					cin>>l;
					searchletter(l)	;
				break;
			case 6:int len;
					cout<<"ENTER LENGTH OF WORD:";
					cin>>len;
					countword(len);
				break;
			default:cout<<"WRONG CHOICE..";
		}
		cout<<"\nDO YOU WANT TO REVISIT READING MENU..";
		cin>>ans;
		}while(ans=='y');
}
/*********************************************/
void mainmenu()
{
	int choice;
	char ans;
	do
	{
		system("cls");
		cout<<"MAIN MENU:";
		cout<<"\n1.WRITING.";
		cout<<"\n2.READING.";
		cout<<"\nENTER YOUR CHOICE:";
		cin>>choice;
		switch(choice)
		{
			case 1:writingmenu();
				break;
			case 2:	readingmenu();			
				break;
			default:cout<<"INVALID CHOICE..";
		}
		cout<<"\nDO YOU WANT TO REVISIT MAIN MENU:";
		cin>>ans;
	}while(ans=='y');
}
int main()
{
	mainmenu();
	
	getch();
	return 0;
}
