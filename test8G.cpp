#include<stdio.h>
struct StudentType{
	char name[10];
	int math;
	int eng;
	int sum;
}stu[10];
void Get(struct StudentType *stu){
	scanf("%s",stu->name);
	scanf("%d",&stu->math);
	scanf("%d",&stu->eng);
	stu->sum=stu->math+stu->eng;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[2][n];
	for(int i=0;i<n;i++){
		Get(&stu[i]);
		a[0][i]=stu[i].sum;
		a[1][i]=i;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[0][j]>a[0][i]){
				int temp=a[0][i];
				a[0][i]=a[0][j];
				a[0][j]=temp;
				temp=a[1][i];
				a[1][i]=a[1][j];
				a[1][j]=temp;
			} 
		}
	}
	for(int i=0;i<n;i++){
		printf("%s ",stu[a[1][i]].name);
		printf("%d\n",stu[a[1][i]].sum);
		
	}
}
