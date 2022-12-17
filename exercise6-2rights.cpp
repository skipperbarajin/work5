#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float bi,ai,i,pe;
	system("color 1");
	cout<<"\n Enter your rights:";
	cin>>bi;
	cout<<"\n enter percent(%) incrace of your rights:";
	cin>>pe;
	cout<<"\n your rights befor incrase is:"<<bi;
	i=(bi*pe)/100.0;
	ai=bi+i;
	cout<<"\n your rights after incrase is:"<<ai;
	cout<<"\n your rights incrase is:"<<i;
	cout<<"\n your percent rights incrace is:"<<pe<<"%";
	return 0;
}