#include<stdio.h>
struct Score{
	int s[6];
	double ave;
}singer[10];
void Get(struct Score *singer){
	singer->ave=0; 
	for(int i=0;i<6;i++){
		scanf("%d",&singer->s[i]);
		singer->ave+=singer->s[i];
	}
	singer->ave/=6;
}
int main(){
	double a[2][10];
	for(int i=0;i<10;i++){
		Get(&singer[i]);
		a[0][i]=singer[i].ave;
		a[1][i]=i;
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[0][j]>a[0][i]){
				double temp=a[0][i];
				a[0][i]=a[0][j];
				a[0][j]=temp;
				temp=a[1][i];
				a[1][i]=a[1][j];
				a[1][j]=temp;
			}
			else if(a[0][j]==a[0][i]&&a[1][j]<a[1][i]){
				double temp=a[0][i];
				a[0][i]=a[0][j];
				a[0][j]=temp;
				temp=a[1][i];
				a[1][i]=a[1][j];
				a[1][j]=temp;
			} 
		}
	}
	for(int i=0;i<10;i++){
		printf("%g ",a[1][i]+1);
		printf("%.2lf\n",a[0][i]); 
	}
}
