#include<cstdio>
using namespace std;
int main(){
	char a[1000],b[1000];
	int len_a,len_b;
	scanf("%s%s",&a,&b);
	for(len_a=0;;len_a++){
		if(a[len_a]=='\0') break;
	}
	for(len_b=0;;len_b++){
		if(b[len_b]=='\0') break;
	}
	printf("The length of first one is %d, and the second one is %d.",len_a,len_b);
	
	return 0;
}
