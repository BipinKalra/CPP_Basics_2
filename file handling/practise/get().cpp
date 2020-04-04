#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	fstream fin;
	fin.open("student.txt",ios::in);
	while(fin)
	{
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
	getch();
	return 0;
}
