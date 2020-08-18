#include<iostream>
using namespace std;
int main(){
	int y,m,d,doty;
	cin>>y>>m>>d;
	int domioy[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (y%4==0 && y%100!=0 || y%400==0)
	{
	domioy[2]+=1;			
	}
	for(int i=0;i<m;i++)
	{
		doty+=domioy[i];
	}
	doty+=d;
	cout<<"Wow, so "<<y<<" "<<m<<" "<<d<<" is the "<<doty<<"th day of the year "<<y<<"!";
	return 0;
}
