#include<iostream>
using namespace std;
class person
{
	public:
	char name[20];
	int regno;
	void getdata()
	{
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the reg no:";
		cin>>regno;
	}
	
};
class account:public person
{
	public:
	int accno;
	void getdata1()
	{
		cout<<"enter the account no:";
		cin>>accno;
	}
};
class admin:public person
{
	public:
	int staffno;
	void getdata2()
	{
		cout<<"enter the staff no:";
		cin>>staffno;
	}
};
class master:public account,public admin
{
	public:
	int roomno;
	void getdata3()
	{
		cout<<"enter the room no:";
		cin>>roomno;
	}
	
};
int main()
{
	person p;
	p.getdata();
	master m;
	m.getdata1();
	m.getdata2();
	m.getdata3();
	return 0;
}
