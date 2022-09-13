#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
		void input();
		void display();
};
void biggest::input()
{
	cout<<"enter two numbers";
	cin>>x>>y;
}
void biggest::display() 
{
	if(x>y)
	{
		cout<<x<<" is greater";
	}
	else
	{
		cout<<y<<"is greater";
	}
}
int main()
{
biggest a;
a.input();
a.display();
}

