#include<stdio.h>
int main(){
	char end[]="End of file";
	char a[30];
	scanf("%s",a);
	if(a==end){
		printf("1");
		printf("%s",a);
	}
}
