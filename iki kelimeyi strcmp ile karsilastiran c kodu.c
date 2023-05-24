#include<stdio.h>
#include<string.h>
int main(){
	char str1[50];
	char str2[10];
	int value;
	printf("enter str1:");
	gets(str1);
	printf("enter str2:");
	gets(str2);
	value = strcmp(str1,str2);
	if( value == 0)
		printf("these strings are same=)");
	else if(value > 0)
		printf("these strings are NOT same and str1 is BIGGER about int value");
	else
		printf("these strings are NOT same and str2 is BIGGER about int value");
	return 0;
}
