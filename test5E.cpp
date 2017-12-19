#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char str[n][2000];
	memset(str, '0', sizeof(str));
	for(int p=0;p<n;p++){
		char str1[1000],str2[1000];
		scanf("%s%s",str1,str2);
		int len1=strlen(str1);
		int len2=strlen(str2);
		char str3[len1][2000];
		memset(str3, '0', sizeof(str3));
		int carry=0;
		//printf("%s%s",str1,str2);
		for(int i=0;i<len1;i++){
			for(int j=0;j<len2;j++){
				//str1[len1-i-1]*str2[len2-j-1];
				int mul=(str1[len1-i-1]-'0')*(str2[len2-j-1]-'0')+carry;
				str3[i][i+j]=mul%10+'0';
				carry=mul/10;
			}
			str3[i][len2+i]=carry+'0';
		}
		/*for(int i=0;i<len1;i++){
			for(int j=0;j<16;j++){
				printf("%c ",str3[i][j]);
			}
			printf("\n");
		}*/
		carry=0;
		for(int i=0;i<2000;i++){
			int sum=carry;
			for(int j=0;j<len1;j++){
				sum+=str3[j][i]-'0';
			}
			str[p][1999-i]=sum%10+'0';
			carry=sum/10;
		}
	}
	for(int p=0;p<n;p++){
		for(int i=0;i<2000;i++){
			if(str[p][i]=='0'){
				if(i==1999){
					printf("0");
				}
				continue;
			}
			else{
				for(int k=i;k<2000;k++){
					printf("%c",str[p][k]);
				}
			}
			break;
		}
		printf("\n");
	}
}
