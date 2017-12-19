#include<stdio.h>
#include<math.h>
int F(float a[]);
int T(float a[]);
int main(){
	int n;
	scanf("%d",&n);
	float a[n][11];
	float b[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<11;j++){
			scanf("%f",&a[i][j]);
		}
		b[i]=F(a[i])*T(a[i]);
	}
	for(int i=0;i<n;i++){
		if(b[i]){
			//printf("%d%d",F(a[i]),T(a[i]));
			printf("Yes\n");
		}
		else{
			//printf("%d%d",F(a[i]),T(a[i]));
			printf("No\n");
		}
	}
}
int F(float a[]){
	float d=0.0;
	for(int i=0;i<3;i++){
		d+=pow(a[i]-a[i+4],2);
	}
	d=sqrt(d);
	float p=(a[3]+a[7]+d)/2;
	float h=2*sqrt(p*(p-a[3])*(p-a[7])*(p-d))/d;
	float k=sqrt(a[3]*a[3]-h*h);
	float b[3];
	for(int i=0;i<3;i++){
		b[i]=a[i]+(a[i+4]-a[i])*k/d-a[i+8];
	}
	float sum=0.0;
	for(int i=0;i<3;i++){
		sum+=b[i]*(a[i]-a[i+4]);
	}
	if(sum>-0.0005&&sum<0.0005)
	    return 0;
	return 1;
}
int T(float a[]){
	float d12=0,d22=0;
	for(int i=0;i<3;i++){
		d12+=pow(a[i]-a[i+8],2);
		d22+=pow(a[i+4]-a[i+8],2);
	}
	if(d12>a[3]*a[3]&&d22>a[7]*a[7]){
		return 0;
	}
	return 1;
}

