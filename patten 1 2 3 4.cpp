#include<iostream>
using namespace std;
int pypart(int n)
{
	int i=1,j=0;
	while(i<=n){
		while(j<=i-1){
		cout<<i<<" ";
		j++;
	}
	j=0;
	i++;
	cout<<endl;
}
}
int main()
{
	int n;
	cin>>n;
	pypart(n);
	return 0;
}
