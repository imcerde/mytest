#include<stdio.h>
int main(){
	int n,a=0;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		a+=i;
	}		
	int head=1;
	for(int i=0;i<n;i++){
		head+=i;
		printf("%d ",head);
		int later=head;
		for(int j=i+2;;j++){
			later+=j;
		if(later<=a)
		printf("%d ",later);
		else{
			break;
		}
	}
	printf("\n");
	}
}
