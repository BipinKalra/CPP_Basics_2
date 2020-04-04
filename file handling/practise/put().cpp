#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("ascii.txt",ios::app);
	char ch;
	int i;
	for(i=33;i<128;i++)
		fout.put((char)i);
	getch();
	return 0;
}












