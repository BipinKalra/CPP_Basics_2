#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct student
{
	int rn;
	char name[15];
	int score;
}a[5]={ {1,"avrati",50},{2,"arsh",60},{3,"harshita",49},{4,"saloni",90},{5,"chinmay",12}	};
void bubblesort(student a[],int n=5)
{
	int i,j,flg;
	student temp;
	for(i=0;i<5;i++)
	{
		flg=0;
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j].name,a[j+1].name)>0)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flg=1;
			}
		}
		if(flg==0)
		break;
	}
	for(i=0;i<5;i++)
	cout<<a[i].rn<<" "<<a[i].name<<" "<<a[i].score<<endl;
}
int main()
{
	bubblesort(a);
	getch();
	return 0;
	
}
