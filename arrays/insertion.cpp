#include<iostream>
#include<conio.h>
using namespace std;
void accept(int a[],int n)
{
	cout<<"ENTER ELEMENTS:";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void insert(int a[],int n,int value)
{
	int i=n-1;
	while((value<a[i])&&i>=0)
	{
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=value;
	n++;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int b[10],n,value;
	cout<<"SIZE OF ARRAY:";
	cin>>n;
	accept(b,n);
	cout<<"ENTER ELEMNT TO B INSERTED:";
	cin>>value;
	insert(b,n,value);
	getch();
	return 0;
}
