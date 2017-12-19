#include<stdio.h>
int F(char a[],int i,int j){
	int t=0;
	for(int k=0;k<3;k++){
		if(a[11*i+j+10+k]=='-'){
			t++;
		}
	}
	for(int k=0;k<3;k++){
		if(a[11*i+j-12+k]=='-'){
			t++;
		}
	}
	if(a[11*i+j-1]=='-')
	t++;
	if(a[11*i+j+1]=='-')
	t++;
	return t;
}
int main(){
	char a[]={"************--**-**--**-*-*****-**-*----**-**--*--**--**---***---**----*----************"};
	int n,t=0;
	scanf("%d",&n);
	if(n>0&&n<8){
		for(int i=1;i<7;i++){
			for(int j=1;j<10;j++){
				if(a[11*i+j]=='*'){
					if(F(a,i,j)==n){
						t++;
					}
				}
			}
		}
		printf("%d",t);
	}
	else{
		printf("Input Error");
	}
}

