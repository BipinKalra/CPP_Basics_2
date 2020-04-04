#include<iostream>
#include<conio.h>
using namespace std;
char a[5];
void ascending(char a[],int n=5)
{
	int i,j,temp,flg;
	for(i=0;i<n;i++)
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
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	cout<<"ENTER STRING:";
	cin>>a;
	ascending(a);
	getch();
	return 0;
	
}
