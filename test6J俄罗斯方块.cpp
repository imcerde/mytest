#include<stdio.h>
int F(int a[][10],int b[][4],int n,int i,int t){
	int c[4][4];
	for(int j=0;j<4;j++){
		for(int k=0;k<4;k++){
			c[j][k]=a[i+j][n+k-1]+b[j][k];
			if(c[j][k]>1){
				return 0;
			}
		}
	}
	for(int j=0;j<4-t;j++){
		for(int k=0;k<4;k++){
			if(c[j][k]!=b[j][k]){
				goto Label_1;
			}
		}
	}
	return 0;
	Label_1:for(int j=0;j<4;j++){
		if(a[i+4][n-1+j]==b[j]&&b[j]==1){

		}
	}
	for(int j=0;j<4;j++){
				for(int k=0;k<4;k++){
					a[i+j][n-1+k]=c[j][k];
				}
			}
	return 1;
}
int main(){
	int a[18][10];
	int b[4][4];
	int d[4];
	int n; 
	for(int i=0;i<15;i++){
		for(int j=0;j<10;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=15;i<18;i++){
		for(int j=0;j<10;j++){
			a[i][j]=0;
		}
	}
	int t=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=3;i>=0;i--){
		int s=0;
		for(int j=0;j<4;j++){
			s+=b[i][j];
		}
		if(s==0){
			t++;
		}
	}
	for(int j=0;j<4;j++){
		d[j]=b[3-t][j];
	}
	scanf("%d",&n);
	for(int i=0;i<11+t;i++){
		if(F(a,b,n,i,t)){
			for(int j=0;j<15;j++){
				for(int k=0;k<10;k++){
					printf("%d ",a[j][k]);
				}
				printf("\n");
			}
			break;
		}
	}
	return 0;
} 
