#include<iostream>
using namespace std;
int main()
{
	int i=1,a,s=0;
	cout<<"enter a number";
	cin>>a;
	while(i<a)
	{
		if(a%i==0)
		s=s+i;
		i++;
	}
	if (s==a)
	{
		cout<<"perfect number";
	}
	else
	{
		cout<<"not perfect number";
	}return 0;
}
