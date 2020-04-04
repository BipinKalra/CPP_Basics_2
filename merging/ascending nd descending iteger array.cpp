#include<iostream>
#include<conio.h>
using namespace std;
int a[10],b[10],c[20],m,n,i,j,k;

void accept(int a[],int l)
{
	for(i=0;i<l;i++)
	cin>>a[i];
}

void display(int a[],int l)
{
	for(i=0;i<l;i++)
	cout<<a[i]<<" ";
}

void bubbleas(int a[],int n)
{
	int temp,flg;
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
	display(a,n);
}

void bubbleds(int a[],int n)
{
	int temp,flg;
	for(i=0;i<n;i++)
	{
		flg=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
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
	display(a,n);
}

void mergingas()
{
	i=0,j=0,k=0;
	while((i<m)&&(j<n))
	{
		if(a[i]<=b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
	}
	while(i<m)
		c[k++]=a[i++];
	while(j<n)
		c[k++]=b[j++];
	
	display(c,m+n);
}

void mergingds()
{
	i=m-1,j=n-1,k=0;
	while((i>=0)&&(j>=0))
	{
		if(a[i]>=b[j])
			c[k++]=a[i--];
		else
			c[k++]=b[j--];
	}
	while(i>=0)
		c[k++]=a[i--];
	while(j>=0)
		c[k++]=b[j--];
	
	display(c,m+n);
}
int main()
{
	cout<<"ENTER SIZES OF A and B";
	cin>>m>>n;
	cout<<"ENTER ARRAY A:";
	accept(a,m);
	cout<<"\nENTER ARRAY B:";
	accept(b,n);
	cout<<"\nA-";
	display(a,m);
	cout<<"\nB-";
	display(b,n);
	cout<<endl;
	bubbleas(a,m);
	cout<<endl;
	bubbleas(b,n);
	cout<<endl;
	mergingas();
	cout<<endl;
	mergingds();
	getch();
	return 0;
}
