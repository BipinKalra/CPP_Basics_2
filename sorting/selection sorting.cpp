#include<iostream>
#include<conio.h>
using namespace std;
int a[5]={4,5,6,1,2};
void ascending(int a[],int n=5)
{
	int i,j,min,t;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	
}
void descending(int a[],int n=5)
{
	int i,j,max,t;
	for(i=0;i<n-1;i++)
	{
		max=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]>a[max])
			max=j;
		}
		t=a[i];
		a[i]=a[max];
		a[max]=t;
	}
}
int main()
{
	int i;
	ascending(a);
	for(i=0;i<5;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	descending(a,5);
	for(i=0;i<5;i++)
	cout<<a[i]<<" ";
	getch();
	return 0;
}
