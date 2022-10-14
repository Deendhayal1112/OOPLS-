#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d,x,x1,x2;
	cout<<"enter a b c";
	cin>>a>>b>>c;
	d=b*b-4*a*c/2*a;
	if(d==0)
	{
	cout<<"roots are equal";
	x=-b/2*a;;
	cout<<x;
	}
	else if(d>=0)
	{
		cout<<"roots are unequal";
		x1=-b+sqrt(d)/2*a;
	
	x2=-b-sqrt(d)/2*a;
	cout<<x1<<"\n";
	cout<<x2<<"\n";
	}
	else 
	{
	cout<<"real and imaginary";
	x1=-b+sqrt(d)/2*a;
	sqrt(-d)/2*a;	
	cout<<x1;
	}
	return 0;
	
}
