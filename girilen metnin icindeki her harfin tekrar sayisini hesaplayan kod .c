#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
	char text[100];
	char harfler[26] = {0};
	int len,i,j;
	
	printf("enter text:");
	gets(text);
	
	len = strlen(text);
	
	for(i=0;i<len;i++){
		if(text[i] >= 'a' && text[i] <= 'z')
			harfler[text[i]-'a']++;
	}
	
	for(i=0;i<26;i++){
		if(harfler[i]>0)
			printf("%c den %d tane var\n",i+'a', harfler[i]);
	}

}
