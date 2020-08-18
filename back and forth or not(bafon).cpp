#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	while(true){
	
	char str[1000];
	int i=0,n=-1;
	do{
		n++;
		scanf("%c",&str[n]);
	}
	while(str[n]!='\n');
	while(str[i]==str[n-1-i]) i++;
	if(i>n/2) cout<<"YEAH!!! THIS WORD IS BACK AND FORTH!"; else cout<<"NO, THIS IS NOT... .";
}
	return 0;
}
