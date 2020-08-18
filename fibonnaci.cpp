#include<iostream>
using namespace std;
int main()
{
	int i;
	int answer,answer_num;
	int a=0,b=1;
	int c;
	cin>>answer;
	answer_num = (int)answer;
	if(answer<3) 
	{
		if(answer==1) cout<<"The 1st number of the Fibonnaci sequence is 0";
		if(answer==2) cout<<"The 2nd number of the Fibonnaci sequence is 1"; 
	}
	else{
		for(i=3;i<=answer_num;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		cout<<"The "<<answer<<"th number of the Fibonnaci sequence is "<<c;
	}
return 0;
}
