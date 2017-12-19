#include<stdio.h>
int num(int n){
	int i=0;
	while(n!=1){
		if(n%2==0){
			n/=2;
		}
		else{
			n=(3*n+1)/2;
		}
		i++;
	}
	return i;
}
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<t;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<t;i++){
		printf("%d\n",num(a[i]));
	}
}
