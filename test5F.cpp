#include<stdio.h>
#include<math.h>
void F(int a[],int n,int i){
	for(int j=0;j<n;j++){
		if(a[j]==-1){
			a[j]=i%n;
			i/=n;
		}
	}
}
int N(int a[],int n){
	for(int i=0;i<n-1;i++){
		if((a[i]-a[i+1])<=1&&(a[i]-a[i+1])>=-1){
			continue;
		}
		else{
			return 0;
		}
	}
	return 1;
}
int S(int n){
	int t=0,k=0;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i]--;
		b[i]=a[i];
		if(a[i]==-1){
			t++;
		}
	}
	for(int i=0;i<pow(n,t);i++){
		F(a,n,i);
		k+=N(a,n);
		for(int j=0;j<n;j++){
			a[j]=b[j];
		}
	}
	return k;
}
int main(){
	int c;
	scanf("%d",&c);
	while(c!=0){
		printf("%d\n",S(c));
		scanf("%d",&c);
	}
	return 0;
} 
