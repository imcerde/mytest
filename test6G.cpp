#include<stdio.h>
long F(long long a[]){
	int i=1;
	while((i*a[1]+1)%a[0]!=0){
		i++;
	}
	long x=(i*a[1]+1)/a[0];
	return x; 
}
int main(){
	long c[10];
	int i;
	long long a[2];
	for(i=0;;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[j]);
		}
		if(a[0]==0&&a[1]==0){
			break;
		}
		c[i]=F(a);
	}
	for(int j=0;j<i;j++){
		printf("%d\n",c[j]);
	}
}
    
