#include<iostream>
#include<conio.h>
using namespace std;
int i,j,k;
struct player
{
	char name[20];
	int runs;
	int wickets;

}a[11],b[11],m[22];

void accept(player c[],int n=11)
{
	for(i=0;i<n;i++)
	{
		cout<<"ENTER DETAILS OF PLAYER "<<i+1<<":";
		cin>>c[i].name>>c[i].runs>>c[i].wickets;
	}
}

void display(player c[],int n=11)
{
	for(i=0;i<n;i++)
	{
		cout<<"DETAILS OF PLAYER "<<i+1<<":";
		cout<<"\nNAME:"<<c[i].name<<"\nRUNS:"<<c[i].runs<<"\nWICKETS"<<c[i].wickets<<endl;
	}
}

void bubblesort(player c[],int n=11)
{
	int flg;
	player temp;
	for(i=0;i<n;i++)
	{
		flg=0;
		for(j=0;j<n-i-1;j++)
		{
			if(c[j].runs<c[j+1].runs)
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
				flg=1;
			}
		}
		if(flg==0)
		break;
	}
	
	display(c,n);
}

void merge(player a[],player b[])
{
	
	i=10;j=10;k=0;
	while((i>=0)&&(j>=0))
	{
		if(a[i].runs<=b[j].runs)
			m[k++]=a[i--];
		else
			m[k++]=b[j--];
	}
	while(i>=0)
		m[k++]=a[i--];
	while(j>=0)
		m[k++]=b[j--];
	display(m,22);
}
int main()
{
	cout<<"ENTER DETAILS OF PLAYERS OF TEAM A:\n";
	accept(a);
	cout<<"\nENTER DETAILS OF PLAYERS OF TEAM A:\n";
	accept(b);
	cout<<"DETAILS OF TEAM A:\n";
	bubblesort(a);
	cout<<"DETAILS OF TEAM B:\n";
	bubblesort(b);
	merge(a,b);
	getch();
	return 0;
}
