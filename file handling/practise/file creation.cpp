#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void write()
{
	char a[10];
	fstream fin;
	fin.open("prac.txt", ios::out|ios::app);
	cin>>a;
	fin<<a<<" ";
	fin.close();
}
void read()
{
	char ch;
	fstream fout;
	fout.open("prac.txt",ios::in);
	while(fout.get(ch))
	cout<<ch;
}
void countwrds()
{
ifstream f("prac.txt");
char w[20];
int count=0;
while(f>>w)
count++;
f.close( );

cout<<"\nThe no. of words :"<<count;
}
int main()
{
	
	read();
	cout<<endl;
	countwrds();
	getch();
	return 0;
}
