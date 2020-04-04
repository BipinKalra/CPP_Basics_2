#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
struct search
{
	char name[10];
}s1[4];


int main()
{
	char fnd='n',w[10],ans[10];
	ifstream fil;
	fil.open("list.txt",ios::in|ios::binary);
	cout<<"ENTER THE NEEDED CONDITION FOR SEARCHING:";
	cin.getline(ans,10);
	int i=0;
	while(!fil.eof())
	{
		for(i=0;i<4;i++)
		{
			fil>>w;
			if(strcmp(ans,w))
			{
				cout<<"found";
				fnd='y';
			}
		
		}
	
	}
	if(fnd=='n')
	cout<<"NO MATCH FOUND";
	fil.close();
	getch();
	return 0;
}

