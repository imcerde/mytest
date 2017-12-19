#include<stdio.h>
int main(){
	int n,m,y=1;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		int q=0;
		for(int k=0;k<m;k++){
			int t;
			for(t=0;t<m;t++){
				if(a[i][k]<a[i][t]){
					break;
				}
			}
			if(t==m){
				q=k;
				break;
			}
		}
		for(int j=0;j<n;j++){
			if(a[i][q]>a[j][q]){
				break;
			}
			if(j==n-1){
				y=0;
				printf("a[%d][%d]=%d\n",i,q,a[i][q]);
			}
		}
	}
	if(y){
		printf("NO\n");
	}
}
