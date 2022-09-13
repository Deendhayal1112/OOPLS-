#include<iostream>
using namespace std;
class EB
{
	int c,u,pmr,cmr,t,a;
	char name[20],type[20];
	public:
		void data();
		void calculate();
};
void EB::data()
{
	cout<<"enter customer name:";
	cin>>name;
	cout<<"customer no:";
	cin>>c;
	cout<<"enter pmr:";
	cin>>pmr;
	cout<<"enter cmr:";
	cin>>cmr;
	cout<<"enter type:";
	cin>>t;
}
void EB::calculate()
{
	switch (t)
	{
		case 1:
			u=cmr-pmr;
			if(u<=100)
			{
				cout<<"amount="<<u*1;
			}
			else if(u>=101 and u<200)
			{
				cout<<"amount="<<u*2.5;
			}
			else if(u>=201 and u<500)
			{
				cout<<"amount="<<u*4;
			}
			else if(u>=501)
			{
				cout<<"amount="<<u*6;
			}
			break;
		case 2:
			u=cmr-pmr;
			if(u<=100)
			{
				cout<<"amount="<<u*2;
			}
			else if(u>=101 and u<=200)
			{
				cout<<"amount="<<u*4.5;
			}
			else if(u>=201 and u<500)
			{
				cout<<"amount="<<u*6;
			}
			else if(u>=501)
			{
				cout<<"amount="<<u*7;
			}
			break;
	}

}
int main()
{
	EB e;
	e.data();
	e.calculate();
}
