#include<iostream>
using namespace std;
class student{
	int mark1,mark2,mark3,mark4,tot,avg;
	float d;
	public:
		void getdata();
		void calculate();
		
};
void student::getdata()
{
	cout<<"Enter the mark1:";
	cin>>mark1;
	cout<<"enter the mark2:";
	cin>>mark2;
	cout<<"enter the mark3:";
	cin>>mark3;
	cout<<"enter the mark4:";
	cin>>mark4;
}
void student::calculate()
{
	if((mark1&&mark2&&mark3&&mark4)>=50||(mark1&&mark2&&mark3&&mark4)<=100)
	{
	cout<<"the candidate is fail or enter the correct input.";
	}

		
	
	else
	{
		tot=mark1+mark2+mark3+mark4;
	d=tot/4;
		cout<<"the total is:"<<tot<<endl;
	cout<<"the average is:"<<d<<endl;
		
	
}
}


int main()
{
	student s;
	s.getdata();
	s.calculate();
	return 0;
}
