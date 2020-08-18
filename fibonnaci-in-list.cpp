#include<iostream>
using namespace std;
int main(){
	int i;
	int a=0,b=1;
	int c;
	cout<<"0 1 ";
	for(i=3;i<=20;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	return 0;
}

