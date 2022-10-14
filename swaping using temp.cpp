#include<iostream>
using namespace std;
int welcome(int c,int d){
	int temp;
	cout<<"before swapping:"<<c<<","<<d<<endl;
	temp=c;
	c=d;
	d=temp;
	cout<<"after swapping:"<<c<<","<<d<<endl;
	return 0;
}
int main(){
	int a=5,b=6;
	welcome(a,b);
	return 0;
}
