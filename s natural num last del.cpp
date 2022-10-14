#include<iostream>
#include<string.h>
using namespace std;
class natural
{
	int a[100],i,b,s;
	public:
		void getdata();
		void display();
		void number();
		
};
void natural::getdata()
{
	cout<<"enter number of elements";
	cin>>b;
}
void natural::number()
{
	for(i=1;i<=b;i++)
	cout<<i;
}
void natural::display()
{
	s=b-1;
	for(i=1;i<=s;i++)
	{
		cout<<"\n"<<i;
	}
}
int main()
{
	natural c;
	c.getdata();
	c.number();
	c.display();
}
