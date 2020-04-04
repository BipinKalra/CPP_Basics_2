#include<iostream>
#include<conio.h>
using namespace std;
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
void insertionsort(int a[],int n)
{
	int i,value,hole;
	for(i=1;i<n;i++)
	{
		value=a[i];
		hole=i;
		while((hole>0)&&(a[hole-1]>value))
		{
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
	}
	display(a,n);
}


int main()
{
	int a[6]={10,9,25,14,3,6},n=6;
	insertionsort(a,n);
	getch();
	return 0;
}
