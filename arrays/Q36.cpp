#include<iostream>
#include<conio.h>
using namespace std;

void rowpro(int x[4][6])
{
	int i,j;
	unsigned int sum[4]={1};
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
				sum[i]*=x[i][j];
				cout<<x[i][j]<<"\t";
		}
		cout<<sum[i]<<endl;
	}
}
int main()
{
	int a[4][6]={7,2,8,4,3,3,4,11,9,2,5,4,9,
				3,2,5,6,8,9,7,6,8,1,4};
	cout<<"\t\tRSUM\n";
	rowpro(a);
	getch();
	return 0;
}
