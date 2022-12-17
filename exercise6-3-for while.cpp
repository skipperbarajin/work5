#include<iostream>
using namespace std;
int main()
{
	float i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		cout<<j<<"\t";
		cout<<"\n";
	}
	return 0;
}