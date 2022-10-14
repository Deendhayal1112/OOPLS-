#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int a;
	char name;
	public:
		void getdata();
		void display();
		
};
void employee::getdata()
{
	cout<<"employee id:";
	cin>>a;
	cout<<"employee name:";
	cin>>name;
}
int main()
{
	employee c;
	c.getdata();
}
