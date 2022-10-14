#include<iostream>
using namespace std;
int area(int b, int h){
	int z;
	cout<<"enter the breadth:";
	cin>>b;
		cout<<"enter the height:";
	cin>>h;
	z=0.5*b*h;
	cout<<"Area of triangle:"<<z<<endl;
}
float area(float r){
	float v;
	cout<<"enter the radius:";
	cin>>r;
	v=3.14*r*r;
	cout<<"area of circle:"<<v<<endl;
}
float area(float l,float u){
	float n;
	cout<<"Enter the length:";
	cin>>l;
		cout<<"enter the breadth:";
	cin>>u;
	n=l*u;
	cout<<"Area of the rectangle:"<<n<<endl;
}
void area(int s){
	cout<<"enter the side>:";
	cin>>s;				
	cout<<"Area of the square:"<<s*s<<endl;
}
int main(){
	int b,h,s;
	float r,l,u;
	area(b,h);
	area(r);
	area(l,u);
	area(s);
	return 0;
}

