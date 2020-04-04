#include<iostream>
#include<conio.h>
using namespace std;
int m[100]={0};
void accept(int a[],int n)
{
	int i;
	cout<<"ENTER ELEMENTS(1-100)\n";
	for(i=0;i<n;i++)
	cin>>a[i];
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int count(int a[],int m[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		++m[a[i]-1];
		cout<<m[a[i]-1];
		getch();
	}
}
void max(int m[])
{
	int i,max;
	for(i=1;i<100;i++)
	{
		if(m[0]<m[i])
		max=i;
	}
	cout<<max+1;
}
int main()
{
	int a[20],n;
	cout<<"ENTER NO OF ELEMENTS:";
	cin>>n;
	accept(a,n);
	display(a,n);
	count(a,m,n);
	max(m);
	getch();
	return 0;
}
