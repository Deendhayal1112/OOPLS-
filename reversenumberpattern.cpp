#include<iostream>
using namespace std;
int main(){
int size;
cin>>size;
for(int i=1;i<=size;i++){
	for(int j=0;j<i;j++){
		cout<<i;
	}
	cout<<"\n";
}
for(int i=1;i<=size-1;i++){
	for(int j=0;j<size-i;j++){
		cout <<i;
	}
	cout<<"\n";
}
return 0;
}
