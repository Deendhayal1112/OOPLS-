#include<iostream>
using namespace std;
int main()
{
	int p,n,r,c,a;
	cout<<"Enter customer ID:";
	cin>>c;
	cout<<"Enter the age:";
	cin>>a;
	cout<<"Enter the principal amount:";
	cin>>p;
	cout<<"Enter the number of years:";
	cin>>n;
	if(a>=60)
	{
		r=12;
	}
	else
	{
		r=10;
	}
	cout<<"Your interest amount is "<<p*n*r/100;
}
