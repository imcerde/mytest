#include<stdio.h>
void change(int *a,char *b){
	if(b[0]=='S'){
		if(b[1]=='R'){
			
		}
	}
}
int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int a[100][100];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char b[2];
		scanf("%s",b);
		change(&a[0][0],b);
	}
}
