#include<iostream>
using namespace std;
class sum
{
	public:
	int a,b,c;
		void getdata()
		{
			cout<<"enter the value of a and b";
			cin>>a>>b;
			c=a+b;
			cout<<"sum of a and b="<<c;
		}
};
class product:public sum
{
	public:
		void getdata1()
		{
			c=a*b;
			cout<<"product of a and b="<<c;
		}
};
int main()
{
	product c;
	c.getdata();
	c.getdata1();
	return 0;
}
