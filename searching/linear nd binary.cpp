#include<iostream>
#include<conio.h>
using namespace std;
int n,a[10],val;

void accept(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cin>>a[i];
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int lsearch(int a[],int n,int val)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		return i+1;
	}
	return -1;
}
int bsearch(int a[],int n,int val)
{
	int beg=0,mid,end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==val)
		return mid+1;
		else if(a[mid]<val)
		beg=mid+1;
		else if(a[mid]>val)
		end=mid-1;
	}
	return -1;
}
int main()
{
	cout<<"ENTER THE NO. OF ELEMENTS U WANT TO ENTER:";
	cin>>n;
	cout<<"\nENTER ELEMENTS(SORTED):";
	accept(a,n);
	cout<<"THE ARRAY IS:";
	display(a,n);
	cout<<"\nENTER THE ELEMENT TO FIND:";
	cin>>val;
	if(lsearch(a,n,val)==-1)
	cout<<"\nELEMENT NOT FOUND(linear)";
	else
	cout<<"\nELEMENT FOUND AT(linear) "<<lsearch(a,n,val);
	
	if(bsearch(a,n,val)==-1)
	cout<<"\nELEMENT NOT FOUND(binary) ";
	else
	cout<<"\nELEMENT FOUND AT(binary) "<<bsearch(a,n,val);
	getch();
	return 0;
}
