#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int m=n/8;
	int b[m];
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<8;j++){
			a[8-j+8*i-1]=b[i]%2;
			b[i]/=2;
		}
	}
	int s=1,x;
	for(int i=0;i<n-1;i++){
		x=a[i];
		if(a[i]==a[i+1]){
			s++;
			if(i!=n-2){
				continue;
			}
		}
		if(x==1)
			printf("%d ",128+s);
		else
			printf("%d ",s);
		s=1;
	}
}

