#include<stdio.h>
#include<string.h>
int main(){
	int n=0;
	char a[1000];
	scanf("%s",a);
	int lena=strlen(a);
	for(int i=0;i<lena;i++){
		if(a[i]>='0'&&a[i]<='9'){
			for(int j=i+1;j<lena;j++){
				if(a[j]>='0'&&a[j]<='9'){
					if(j==lena-1){
						n++;
						i=j;
						break;
					} 
					continue;
				}
				n++;
				i=j;
				break;
			}
		}
		else{
			continue;
		}
	}
	printf("%d",n);
}
