#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int h[n];
	int a[m][2];
	for(int i=0;i<n;i++){
		h[i]=i+1;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int k=0;k<m;k++){
		if(a[k][1]>0){
			int temp=a[k][0];
			for(int j=0;j<n;j++){
				if(temp==h[j]){
					for(int i=j;i<j+a[k][1];i++){
						h[i]=h[i+1];
					}
					h[j+a[k][1]]=temp;
					break;
				}
			}
		}
		else{
			int temp=a[k][0];
			for(int j=0;j<n;j++){
				if(temp==h[j]){
					for(int i=j;i>j+a[k][1];i--){
						h[i]=h[i-1];
					}
					h[j+a[k][1]]=temp;
					break;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	printf("%d ",h[i]);
}
