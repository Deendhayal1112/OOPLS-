#include<iostream>
using namespace std;
int main()
{
	int a,b,reverse=0,reminder;
	cout<<"Enter a number :";
	cin>>a;
	while(a!=0)
	{
		reminder=a%10;
		reverse=reverse*10+reminder;
		a=a/10;
	}
	if(reverse==0)
	{
		cout<<"Enter a valid input";
	}
	else
	{
	    cout<<"Reverse :"<<reverse;
	    return 0;
    }
}
