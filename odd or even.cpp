
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int a;
	cout<<"enter number";
	cin>>a;
	if(int(a))
	{
	if (a%2==0)
	{
		cout<<"even number";
	}
	else
	{
		cout<<"odd number";
	}
}
else
{
cout<<"invalid";
}
	
	return 0;

}

