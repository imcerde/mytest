#include<stdio.h>
#include<string.h>
void F(char root[],int lenroot,char a[],int len){
	if(a[0]!='/'){
		for(int i=lenroot+len+1;i>=lenroot+1;i--){
			a[i]=a[i-lenroot-1];
		}
		for(int i=0;i<lenroot;i++){
			a[i]=root[i];
		}
		a[lenroot]='/';
		len+=lenroot+1;
	}
	for(int i=0;i<len;i++){
		char del1[2];
		for(int k=i;k<i+2;k++){
			del1[k-i]=a[k];
		}
		if(strcmp(del1,"//")==0){
			for(int k=i+1;k<len-1;k++){
				a[k]=a[k+1];
			}
			a[len-1]='\0';
			len--;
			i--;
			continue;
		}
		char del2[3];
		for(int k=i;k<i+3;k++){
			del2[k-i]=a[k];
		}	
		if(strcmp(del2,"/./")==0){
			for(int k=i+1;k<len-2;k++){
				a[k]=a[k+2];
			}
			a[len-2]='\0';
			len-=2;
			i--;
			continue;
		}
		char del3[4];
		for(int k=i;k<i+4;k++){
			del3[k-i]=a[k];
		}
		if(strcmp(del3,"/../")==0){
			if(i==0){
				for(int k=i+1;k<len-3;k++){
					a[k]=a[k+3];
				}
				a[len-3]='\0';
				len-=3;
				i--;
				continue; 
			}
			int t=i;
			while(a[i-1]!='/'){
				i--;
			}
			i--;
			t=t-i+3;
			for(int k=i+1;k<len-t;k++){
				a[k]=a[k+t];
			}
			a[len-t]='\0';
			len-=t;
			i--;
			continue;
		}
		if(i==len-1&&a[i]=='/'){
			if(i!=0)
				a[i]='\0';
		}		
	}
}
int main(){
	int n;
	char root[1000];
	scanf("%d",&n);
	scanf("%s",root);
	int lenroot=strlen(root);
	char tree[n][1000];
	for(int i=0;i<n;i++){
		scanf("%s",tree[i]);
	}
	for(int i=0;i<n;i++){
		int len=strlen(tree[i]);
		F(root,lenroot,tree[i],len); 
		printf("%s\n",tree[i]);
	}
}

