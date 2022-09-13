#include<iostream>
using namespace std ;
int main()
{
	int age;
	cout<<"enter a age:";
	cin>>age;
	if(age>0)
	{
	   if(age>=18)
	
		cout<<"your eligible for voting";
	else
	
		cout<<"your eligible after"<<18-age<<"years" ;
}
	else
	{
		cout<<" invalid input";
	}
	
}
