#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct player
{
	char name[15];
	long runs;
	long wickets;
};

void accept(player p[])
{
	cout<<"PLAYER RECORD:";
	for(int i=0;i<5;i++)
	{
		cout<<"\nPLAYER "<<i+1<<":";
		cout<<"\nNAME:";
		cin>>p[i].name;
		cout<<"\nRUNS:";
		cin>>p[i].runs;
		cout<<"\nWICKETS:";
		cin>>p[i].wickets;
	}
}
void display(player p[],int n=5)
{
	cout<<"PLAYER RECORD:";
	for(int i=0;i<n;i++)
	{
		cout<<"\nPLAYER "<<i+1<<":";
		cout<<"\nNAME:"<<p[i].name;
		cout<<"\nRUNS:"<<p[i].runs;
		cout<<"\nWICKETS:"<<p[i].wickets<<endl;
	}
}
void ascending(player p[])
{
	int i,j;
	player t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(p[j].runs>p[j+1].runs)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	cout<<"RECORDS IN INCREASING RUNS\n";
	display(p);
}
void decending(player p[])
{
	int i,j;
	player t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(p[j].runs<p[j+1].runs)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	cout<<"RECORDS IN DECREASING RUNS\n";
	display(p);
}
void mergea(player p1[],player p2[])
{
	int i=0,j=4,k=0;
	player p3[10];
	while((i<5)&&(j>=0))
	{
		if(p1[i].runs<p2[j].runs)
			p3[k++]=p1[i++];
		else
			p3[k++]=p2[j--];
	}
	while(i<5)
		p3[k++]=p1[i++];
	while(j>=0)
		p3[k++]=p2[j--];
		
	display(p3,10);
}
int main()
{
	player t1[5]={{"chinmay",10000,10000},
					{"saloni",10010,10000},
					{"ritika",9999,9998},
					{"naman",10001,1542},
					{"aastha",9997,2626}
					};
	player t2[5]={{"arshdeep",10003,1000},
					{"avrati",1008,1000},
					{"harshita",99001,998},
					{"saumya",10001,1542},
					{"vikas",9997,2626}
					};
	display(t1);
	cout<<endl<<endl;
	display(t2);
	cout<<endl<<endl;
	ascending(t1);
	cout<<endl<<endl;
	decending(t2);
	cout<<endl<<endl;
	mergea(t1,t2);
	getch();
	return 0;
}
