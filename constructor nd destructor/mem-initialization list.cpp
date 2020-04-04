#include<iostream>
#include<conio.h>
using namespace std;
struct sname
{
	char fname[25];
	char lname[25];
}s1;
class test
{
		int a,b;
		const int max;
		sname &name;
	public:
		test():max(300),name(s1)
		{
			a=0;b=10;
		}
		void show()
		{
			cout<<"a="<<a;
			cout<<"\nb="<<b;
			cout<<"\nmax="<<max;
			
		}		
};
int main()
{
	test k;
	k.show();
	return 0;
}
