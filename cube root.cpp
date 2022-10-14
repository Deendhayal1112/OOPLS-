#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b;
	cout<<"enter a number";
	cin>>a;
	if(a<=0)
	{
		cout<<"enter positive num";
	}
	else
	{
	b=cbrt(a);
	cout<<"cube root of a is"<<b;
}
	return 0;
}
