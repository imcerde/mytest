#include<stdio.h>
struct ScoreType{
	int math;
	int Eng;
	int phy;
	int sum;
};
void Get(struct ScoreType *stu){
	scanf("%d",&stu->math);
	scanf("%d",&stu->Eng);
	scanf("%d",&stu->phy);
	stu->sum=stu->math+stu->Eng+stu->phy;
}
int main(){
	int n;
	scanf("%d",&n);
	struct ScoreType stu;
	int maxsum=0;
	for(int i=0;i<n;i++){
		Get(&stu);
		if(stu.sum>maxsum){
			maxsum=stu.sum;
		}
	}
	printf("%d",maxsum);
	
}
