#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[100*n];
	int t=0;
	for(int i=0;i<n+1;i++){
		int a[100];
		char m='c';
		int j=0;
		while((m=getchar())!='\n'){
			if(m>='a'&&m<='z'){
				a[j]=m;
				j++;
			}
		}
		for(int k=j-1;k>=0;k--){
			c[t]=a[k];
			t++;
		} 
		if(i!=0){
			c[t]='\n';
			t++;
		}
	}
	c[t]='\0';
	printf("%s",c);
}
