#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	void getdata()
	{
		cout<<"enter the rollno:";
		cin>>rollno;
	}
};
class test:public student
{
	public:
	int m1,m2;
	    void getdata1()
		{
		cout<<"enter the mark1:";
		cin>>m1;
		cout<<"enter the mark2:";
		cin>>m2;
		}
};
class total:public test
{
	public:
	int test;
	    void getdata2()
		{
		test=m1+m2;
		cout<<"total="<<test;	
		}
};
int main()
{
	total c;
	c.getdata();
	c.getdata1();
	c.getdata2();
	return 0;
}
