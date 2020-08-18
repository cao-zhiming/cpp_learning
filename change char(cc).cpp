#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	cout<<"First type the original text, then enter. Then type the char you want to be changed, enter. Then type in the char you want to be changed to, and then enter."<<"\n";
	
	char txt[200],A,B,c;
	int n=0,i;
	do{
		scanf("%c",&c);
		if(c!='\n') txt[n++]=c;
	}while(c!='\n');
	scanf("%c %c",&A,&B);
	for(i=0;i<n;i++) if(txt[i]==A) txt[i]=B;
	cout<<txt<<endl;
	return 0;
}
