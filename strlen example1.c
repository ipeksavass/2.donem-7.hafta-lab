#include <stdio.h>
#include <stdlib.h>
int main(){
	char ipek[30];
	int len=0;
	strcpy(ipek,"savas");
	len=strlen(ipek);
	printf("|%s| dizisinin uzunlugu= |%d|",ipek,len);
	return 0;
}
