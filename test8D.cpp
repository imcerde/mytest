#include<stdio.h>
#include<math.h>
int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	
	int s=0;
	int si=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			si+=a*pow(10,j);	
		}
		s+=si;
		si=0;
	}
	printf("%d",s);
}
