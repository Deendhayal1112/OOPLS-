#include<iostream>
using namespace std ;
int main()
{
	int a[5],t,i,j,sum,diff;
	cout<<"enter a elementa:";
	for(i=0;i<5;i++)
	cin>>a[i];
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if (a[i]<a[j]);
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				
			}
		}
		
	}
	for(i=1;i<=5;i++)
	{
		sum=a[0]+a[4];
		diff=a[0]-a[4];	
		}
	cout<<"The max number is"<<a[0]<<endl;
	cout<<"The min number is"<<a[4]<<endl;
	cout<<"sum:"<<a[0]+a[4]<<endl;
	cout<<"The diference number is"<<a[0]-a[4]<<endl;
	return 0;
}
