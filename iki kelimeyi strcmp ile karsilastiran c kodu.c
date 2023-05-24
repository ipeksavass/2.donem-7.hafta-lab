#include<stdio.h>
#include<string.h>
int main(){
	char str1[50];
	char str2[10];
	int value;
	int length1, length2;
	printf("enter str1:");
	gets(str1);
	printf("enter str2:");
	gets(str2);
	value = strcmp(str1,str2);
	if( value == 0)
		printf("these strings are same=)");
	else {
	length1 = strlen(str1);
	length2 = strlen(str2);
	if(length1 - length2 == 0)
		printf("These strings have the same lenght.");
	else if(length1 - length2 > 0)
		printf("The first string is longer.");
	else
		printf("The second string is longer.");
	return 0;
}
