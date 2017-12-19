#include<stdio.h>
#include<string.h>
int main(){
	int n=0;
	char a[50],b[10],c[10];
	scanf("%s%s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	for(int i=0;i<lena-lenb;i++){
		strncpy(c,a+i,lenb);
		if(strcmp(b,c)==0){
			n++;	
		}
	}
	printf("%d",n);
}
