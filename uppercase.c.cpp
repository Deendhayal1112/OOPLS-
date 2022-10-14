#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100];
cout<<"enter word";
cin>>a;
cout<<"input is the"<<a<<"\n";
cout<<"uppercase letter is";
for(int x=0;x<strlen(a);x++)
{
	putchar(toupper(a[x]));
}
return 0;
}



