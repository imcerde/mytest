#include<stdio.h>
void Pattern(int n){
	for(int i=0;i<n;i++){
		printf("--**-**--");
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("-*--*--*-");
	}
	printf("\n");
	for(int j=0;j<4;j++){
		for(int i=0;i<n;i++){
			for(int k=0;k<j+1;k++){
				printf("-");
			}
			printf("*");
			for(int k=0;k<5-2*j;k++){
				printf("-");
			}
			if(j!=3)
			printf("*");
			for(int k=0;k<j+1;k++){
				printf("-");
			}
		}
		printf("\n");
	}
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<1||n>5){
		printf("Input Error");
	}
	else{
		for(int i=0;i<m;i++){
			Pattern(n);
			//printf("\n");
		}
	}
	
	return 0;
}
