#include<stdio.h>
#include<string.h>
int Summon(int a[3][7]){
	int position,attack,health;
	scanf("%d%d%d",&position,&attack,&health);
	for(int i=1;i<3;i++){
		for(int j=6;j>position-1;j--){
			a[i][j]=a[i][j-1];
		}
	}
	a[1][position-1]=attack;
	a[2][position-1]=health;
}
int Attack(int *hp,int flw1[3][7],int flw2[3][7],int *n1,int *n2){
	int a,b;
	int num1=*n1,num2=*n2;
	scanf("%d%d",&a,&b);
	if(b==0){
		*hp-=flw1[1][a-1];
	}
	else{
		flw1[2][a-1]-=flw2[1][b-1];
		flw2[2][b-1]-=flw1[1][a-1];
	}
	int i=0;
	while(i<num1){
		if(flw1[2][i]<=0){
			for(int j=i;j<num1;j++){
				flw1[1][j]=flw1[1][j+1];
				flw1[2][j]=flw1[2][j+1];
			}
			num1--;
		}
		else{
			i++;
		}
	}
	i=0;
	while(i<num2){
		if(flw2[2][i]<=0){
			for(int j=i;j<num2;j++){
				flw2[1][j]=flw2[1][j+1];
				flw2[2][j]=flw2[2][j+1];
			}
			num2--;
		}
		else{
			i++;
		}
	}
	*n1=num1;
	*n2=num2;
}
int main(){
	int c=1;
	int num1=0,num2=0;
	int *n1=&num1,*n2=&num2;
	int hp1=30,hp2=30;
	int *p1=&hp1;
	int *p2=&hp2;
	int flw1[3][7]={0},flw2[3][7]={0};
		for(int j=0;j<7;j++){
			flw1[0][j]=j+1;
			flw2[0][j]=j+1;
		}
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char a[7];
		scanf("%s",a);
		if(strcmp(a,"summon")==0){
			if(c%2==1){
				num1++;
				Summon(flw1);
			}	
			else{
				num2++;
				Summon(flw2);
			}
		}
		else if(strcmp(a,"attack")==0){
			if(c%2==1){
				Attack(p2,flw1,flw2,n1,n2);
			}
			else{
				Attack(p1,flw2,flw1,n2,n1);
			}
				
		}
		else if(strcmp(a,"end")==0){
			c++;
		}
	}
	if(hp1<=0){
		printf("-1\n");
	}
	else if(hp2<=0){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	printf("%d\n",hp1);
	printf("%d ",num1);
	for(int k=0;k<num1;k++){
		printf("%d ",flw1[2][k]);
	}
	printf("\n%d\n%d ",hp2,num2);
	for(int k=0;k<num2;k++){
		printf("%d ",flw2[2][k]);
	}
	return 0;
}
