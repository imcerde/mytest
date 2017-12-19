#include<stdio.h>
#include<math.h>
int Ifc(int i,int n){
	if(i/100000==0){
		int sum=0;
		int a[5];
		for(int j=0;j<5;j++){
			a[j]=i%10;
			i/=10;
			sum+=a[j];
		}
		if(sum!=n){
			return 0;
		}
		if(a[0]!=a[4]){
			return 0;
		}
		if(a[1]!=a[3]){
			return 0;
		}
		return 1;
	}
	else{
		int a[6];
		int sum=0;
		for(int j=0;j<6;j++){
			a[j]=i%10;
			i/=10;
			sum+=a[j];
		}
		if(sum!=n){
			return 0;
		}
		if(a[0]!=a[5]){
			return 0;
		}
		if(a[1]!=a[4]){
			return 0;
		}
		if(a[2]!=a[3]){
			return 0;
		}
		return 1;
	}
}
int main(){
	int n;
	int NO=1;
	scanf("%d",&n);
	for(int i=10001;i<1000000;i++){
		if(Ifc(i,n)){
			NO=0;
			printf("%d\n",i);
		}
	}
	if(NO){
		printf("-1");
	}
} 

