#include<iostream>
using namespace std;
int main()
{
	int x,i,y=0;
	cout<<"number";
	cin>>x;
	if(x>0)
	{
	try
	{
		if(!(int (x)))
		throw x;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			y=y+1;
		}
		if(y==0)
		{
			cout<<"prime";
		}
		else
		{
			cout<<"composite";
		}
	}
		catch(...)
		{
			cout<<"enter only natural";;
		}
	}
		else
		{
			cout<<"0 is neither prime nor composite";
			return 0;
		}
		
	



















}
