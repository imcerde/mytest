#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		double m=sqrt(5);
		int t=1/m*(pow((1+m)/2,a[i])-pow((1-m)/2,a[i]));
		printf("%d\n",t);
	}
}
