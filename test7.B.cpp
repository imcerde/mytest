#include<stdio.h>
void F(int a[],int key[],int n){
	
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[k][3];
	int key[n];
	for(int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
		a[i][2]+=a[i][1];
	}
	int least=a[0][2];
	for(int m=0;m<k;m++){
		if(a[m][2]>least){
			least=a[m][2];
		}
		for(int i=k-m-1;i>0;i--){
			if(a[i][1]<a[i-1][1]){
				for(int j=0;j<3;j++){
					int temp=a[i][j];
					a[i][j]=a[i-1][j];
					a[i-1][j]=temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		key[i]=i+1;
	}
	for(int i=0;i<k;i++){
		
	}
} 
