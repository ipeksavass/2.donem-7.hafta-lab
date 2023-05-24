#include<stdio.h>
#include<string.h>
int main(){
	char str1[80];
	char str2[15];
	int value;
	printf("enter str1:");
	gets(str1);
	printf("enter str2:");
	scanf("%s",str2);
	int n=0,m=0,index=0,times=0;
	int len = strlen(str2);
	while(str1[n] != '\0'){
		if(str1[n] == str2[m]){
			index=n;
			while(str1[n]==str2[m] && str1[n]!='\0'){
				n++;
				m++;
			}
		if(m ==len && (str1[n]==' ' || str1[n]=='\0')){
			times++;
			printf("initial indexof %d. repetation : %d\n",times,index);
		}
		}else {
			while(str1[n]!=' '){
				n++;
				if(str1[n]=='\0')
				break;
			}
		}
		n++;
		m=0;
	}
	if(times==0)
		printf("kelime cumle icinde yok!");
	return 0;
}
