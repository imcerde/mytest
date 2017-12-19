#include<stdio.h>
int TorF(int x,int y,int w,int h){
	if(x>=1&&x<=9){
		if(y>=1&&y<=6){
			if(w>=1&&w<=9){
				if(h>=1&&h<=6){
					if(w+x>=2&&w+x<=10){
						if(y+h>=2&&y+h<=7){
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}
int main(){
	int x,y,w,h;
	scanf("%d%d%d%d",&x,&y,&w,&h);
	char a[55]="--**-**---*--*--*--*-----*---*---*-----*-*-------*----";
	if(TorF(x,y,w,h)){
		for(int i=y-1;i<h+y-1;i++){
			for(int j=x-1;j<w+x-1;j++){
				printf("%c",a[9*i+j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Input Error");
	}
}
