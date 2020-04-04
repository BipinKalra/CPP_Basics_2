#include<iostream>
#include<conio.h>
using namespace std;
void accept(int a[],int n)
{
	cout<<"ENTER ELEMENTS:";
	for(int i=0;i<n;i++)
	cin>>a[i];
}

void deletion(int a[],int n,int value)
{
	int pos,i;
	for(i=0;i<n;i++)
	{
		if(a[i]==value)
		{
			pos=i;
			break;
		}
	}
	for(int j=pos;j<n-1;j++)
	{
		a[j]=a[j+1];
	}
	n--;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int b[10],n,value;
	cout<<"SIZE OF ARRAY:";
	cin>>n;
	accept(b,n);
	cout<<"ENTER ELEMNT TO B DELETED:";
	cin>>value;
	deletion(b,n,value);
	getch();
	return 0;
}
