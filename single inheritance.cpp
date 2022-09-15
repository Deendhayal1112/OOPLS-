#include<iostream>
using namespace std;
class p
{
	int x=4;
	public:
	void getdata1()
	{
		cout<<"x value is "<<x;
	}
};
class C:public p
{
	int y=5;
	public:
	void getdata()
	{
		cout<<"y value is "<<y;
	}
};
int main()
{
	C c;
	c.getdata();
	c.getdata1();
	return 0;
}
