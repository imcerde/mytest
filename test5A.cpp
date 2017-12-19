#include<stdio.h>
int main(){
	int n,m;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		if(m==a[i]){
			printf("%d ",i);
		}
	}
	return 0;
}
