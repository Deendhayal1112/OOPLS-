#include<iostream>
using namespace std;
int welcome(int c,int d)
{
	int add,mul,sub,mod;
	float div;
	add=c+d;
	sub=c-d;
	mul=c*d;
	div=c/d;
	mod=c%d;
	cout<<"addition:"<<add<<endl;
		cout<<"subtraction:"<<sub<<endl;
	cout<<"multiplication:"<<mul<<endl;
	cout<<"divison:"<<div<<endl;
	cout<<"modulues:"<<mod<<endl;

	return 0;
}
int main(){
	int a=5,b=6;
	welcome(a,b);
	return 0;
}
