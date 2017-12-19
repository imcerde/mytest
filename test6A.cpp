#include<stdio.h>
int S(char s1[],char s2[]){
	int i=0;
	while(s1[i]==s2[i]){
		if(s1[i]=='\n'&&s2[i]=='\n'){
			return 0;
		}
		i++;
	}
	if(s1[i]=='\n'){
		return -s2[0];
	}
	else if(s2[i]=='\n'){
		return s1[i];
	}
	return s1[i]-s2[i];
}
int main(){
	char s1[100],s2[100];
	int i=0;
	do{
		s1[i]=getchar();
		i++;
	}while(s1[i-1]!='\n');
	i=0;
	do{
		s2[i]=getchar();
		i++;
	}while(s2[i-1]!='\n');
	printf("%d",S(s1,s2));
}
