#include<iostream>
using namespace std;
class employee{
	int id,salary,a;
	char name[100];
	public:
		void getdata();
		void display();
};
void employee::getdata(){
	cout<<"enter the id:";
	cin>>id;
	cout<<"enter the name:";
	cin>>name;
	cout<<"enter  the salary:";
	cin>>salary;
}
void employee::display(){
	if(salary<=10000){
		a=0.05*salary;
		cout<<"The Bonus is :"<<a<<endl;
	}
	else if(salary<=20000){
		a=0.07*salary;
		cout<<"The bonus is:"<<a<<endl;
	}
	else if(salary<=30000){
		a=0.1*salary;
		cout<<"The Bonus is:"<<a<<endl;
	}
	else{
		a=0.2*salary;
		cout<<"The Bonus is:"<<a<<endl;
	}
}
int main(){
	employee b;
	b.getdata();
	b.display();
	return 0;
}
