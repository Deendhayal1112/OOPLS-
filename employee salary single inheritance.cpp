#include<iostream>
using namespace std;
class employee
{
	public:
	int employeeid,salary;
	char employeename[50];
	
		void getdata()
		{
			cout<<"employee name:";
			cin>>employeename;
			cout<<"employee id:";
			cin>>employeeid;
			cout<<"employee salary:";
			cin>>salary;
		}
};
class calculate:public employee
{
	int hra,da,pf,netsalary,grosssalary;
	public:
		void getdata1()
		{
		cout<<"Hra=";
        cin>>hra;
        cout<<"da ";
        cin>>da;
        cout<<"pf";
        cin>>pf;	
        netsalary=hra+da+salary-pf;
        cout<<"net salary="<<netsalary<<endl;
        grosssalary=hra+da+salary+pf;
        cout<<"gross salary="<<grosssalary<<endl;
		}
};
int main()
{
	calculate c;
	c.getdata();
	c.getdata1();
	return 0;
}

