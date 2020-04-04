#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
	char name[10];
	int cls;
	char sec;
}a[5]={ {"CHINMAY",12,'B'},{"SAHIL",11,'B'},{"SALONI",12,'A'},{"NAMAN",10,'D'},{"DANISH",11,'A'}	};
void bubblesort(student a[],int n=5)
{
	int i,j,flg;
	student temp;
	for(i=0;i<5;i++)
	{
		flg=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].cls>a[j+1].cls)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flg=1;
			}
			else if((a[j].cls==a[j+1].cls)&&(a[j].sec>a[j+1].sec))
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
	cout<<"NAME\tCLASS\tSECTION\n";
	for(i=0;i<5;i++)
	cout<<a[i].name<<"\t"<<a[i].cls<<"\t"<<a[i].sec<<endl;
}
int main()
{
	bubblesort(a);
	getch();
	return 0;
	
}
