#include<iostream>
using namespace std;
int welcome(int c,int d){
	
	cout<<"before swapping:"<<c<<","<<d<<endl;
	c=c+d;
	d=c-d;
	c=c-d;
	cout<<"after swapping:"<<c<<","<<d<<endl;
	return 0;
}
int main(){
	int a=5,b=6;
	welcome(a,b);
	return 0;
}
