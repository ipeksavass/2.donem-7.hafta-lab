#include <stdio.h>
#include <stdlib.h>
int main(){
	char *str=NULL;
	char ch='x',c;
	int freq=0,size=0;
	str = (char*)malloc((size+1)*sizeof(char));
	printf("enter a character to find its frequency:");
	scanf("%c",&c);
	printf("enter a string:");
	gets(str);
	while(ch!='\0'){
		ch = getchar();
		if(ch== '\0' || ch=='\n')
			ch=0;
		size++;
		str = realloc(str,(size+1)*sizeof(char));
		if(!str){
			free(str);
			str = NULL;
			break;
		}
		str[size-1]=ch;
		if(ch==c)
			freq++;
	}
	printf("frequency of %c in %s is %d",c,str,freq);
	return 0;
}
