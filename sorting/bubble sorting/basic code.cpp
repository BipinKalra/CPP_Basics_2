#include<iostream>
#include<conio.h>
using namespace std;
int a[5]={2,7,4,5,6};
void ascending(int a[],int n=5)
{
	int i,j,temp,flg;
	for(i=0;i<5;i++)
	{
		flg=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
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
	cout<<a[i]<<" ";
}
int main()
{
	ascending(a);
	getch();
	return 0;
	
}
