#include<iostream>
using namespace std;
int main()
{
	int i,answer,a=0,b=1,c;
	cin>>answer;
	int answer_num;
	answer_num = (int)answer;
	for(i=3;i<=answer_num;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		cout<<"The "<<answer<<"th number of the Fibonnaci sequence is "<<c;
		return 0;
	}
