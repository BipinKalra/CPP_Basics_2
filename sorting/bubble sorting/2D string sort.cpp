#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
char a[3][10]={"saloni","chinmay","naman"};
char c[10],b[10];
char t[10];
int strcm(char b[],char c[])
{
	int i;
	for(i=0;b[i]!='\0'||c[i]!='\0';i++)
	{
		if(b[i]>c[i])
		{
			return 1;
			
		}
		else if(b[i]<c[i])
		{
			return -1;
			break;
		}
		
	}
}
void strcp(char t[],char b[])
{
	int i;
	for(i=0;b[i]!='\0';i++)
	{t[i]=b[i];
	}
	t[i]='\0';
	
}
void bubblesort()
{
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(strcm(a[j],a[j+1])==1)
			{
				strcp(t,a[j]);
				strcp(a[j],a[j+1]);
				strcp(a[j+1],t);
			}
			
		}
	}
	for(i=0;i<3;i++)
	{
		puts(a[i])	;
		cout<<endl;
	}
	
}
int main()
{
	bubblesort();	
	getch();
	return 0;
}
