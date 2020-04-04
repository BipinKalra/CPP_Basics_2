#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
	int rn;
	int score;
}a[5]={ {1,50},{2,60},{3,49},{4,90},{5,12}	};
void bubblesort(student a[],int n=5)
{
	int i,j,flg;
	student temp;
	for(i=0;i<5;i++)
	{
		flg=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].score>a[j+1].score)
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
	cout<<a[i].rn<<" "<<a[i].score<<endl;
}
int main()
{
	bubblesort(a);
	getch();
	return 0;
	
}
