#include<iostream>
#include<conio.h>
using namespace std;

void rowpro(int x[4][6])
{
	int i,j;
	unsigned int sum[4]={0};
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
				sum[i]+=x[i][j];
				cout<<x[i][j]<<"\t";
		}
		cout<<sum[i]<<endl;
	}
}
int main()
{
	int a[5][6]={77,29,85,46,33,38,49,110,93,220,55,421,93,
				32,258,51,61,812,93,712,614,823,165,46,145,23,55,14,25,53};
	cout<<"\t\tRSUM\n";
	rowpro(a);
	getch();
	return 0;
}
