#include<iostream>
using namespace std;
class bank
{
	public:
	float simpleintrest,principal,time,intrestrate;
	void getrateofintrest()
	{
		cout<<"enter the simpleintrest:";
		cin>>simpleintrest;
		cout<<"enter the principal ammount:";
		cin>>principal;
		cout<<"enter the time:";
		cin>>time;
		intrestrate=simpleintrest*100/principal*time;
	    cout<<"rate of intrest:"<<intrestrate;
	}
};
class sbi:public bank
{
	public:
	float simpleintrest1,principal1,time1,intrestrate1;
	void getrateofintrest1()
	{
		cout<<"enter the simpleintrest :";
		cin>>simpleintrest1;
		cout<<"enter the principal ammount:";
		cin>>principal1;
		cout<<"enter the time:";
		cin>>time1;
		intrestrate1=simpleintrest1*100/principal1*time1;
	    cout<<"rate of intrest in sbi:"<<intrestrate1<<endl;
	}
};
class icici:public bank
{
	public:
	float simpleintrest2,principal2,time2,intrestrate2;
	void getrateofintrest2()
	{
		cout<<"enter the simpleintrest :";
		cin>>simpleintrest2;
		cout<<"enter the principal ammount:";
		cin>>principal2;
		cout<<"enter the time:";
		cin>>time2;
		intrestrate2=simpleintrest2*100/principal2*time2;
	    cout<<"rate of intrest in icici:"<<intrestrate2<<endl;
	}
};
class axis:public bank
{
	public:
	float simpleintrest3,principal3,time3,intrestrate3;
	void getrateofintrest3()
	{
		cout<<"enter the simpleintrest :";
		cin>>simpleintrest3;
		cout<<"enter the principal ammount:";
		cin>>principal3;
		cout<<"enter the time:";
		cin>>time3;
		intrestrate3=simpleintrest3*100/principal3*time3;
	    cout<<"rate of intrest in axis:"<<intrestrate3<<endl;
	}
};
int main()
{
	bank d;
	d.getrateofintrest();
	sbi s;
	s.getrateofintrest1();
	axis f;
	f.getrateofintrest3();
	icici g;
	g.getrateofintrest2();
	return 0;
}
