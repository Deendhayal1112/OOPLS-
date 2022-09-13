#include<iostream>
using namespace std ;
int main()
{
	string s1,s2;
	cout<<"enter a user s1 name:";
	cin>>s1;
	cout<<"enter a user s2 name:";
	cin>>s2;
	if(s1==s2)
	{
		cout<<"valid input";
	}
	else
	{
		cout<<"invalid input";
	}
	return 0;
}
