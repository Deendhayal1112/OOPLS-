#include<iostream>
using namespace std;
int volume(int b, int o,int l){
	int z;
	cout<<"enter the breadth:";
	cin>>b;
		cout<<"enter the height:";
	cin>>o;
	cout<<"enter the length:";
	cin>>l;
	z=0.5*b*o*l;
	cout<<"Volume of triangle:"<<z<<endl;
	cout<<"------------------------------"<<endl;
}
int volume(int r,int h){
	int n;
	cout<<"Enter the radius:";
	cin>>r;
		cout<<"enter the height:";
	cin>>h;
	n=3.14*r*r*h;
	cout<<"Volume of the cylinder:"<<n<<endl;
		cout<<"------------------------------"<<endl;
}
int volume(int s){
	cout<<"enter the side>:";
	cin>>s;
	cout<<"volume of the square:"<<s*s*s<<endl;
		cout<<"------------------------------"<<endl;
		  }
int main(){
	int b,o,l,r,h,s;
	volume(b,o,l);
	volume(r,h);
	volume(s);
	return 0;
}
