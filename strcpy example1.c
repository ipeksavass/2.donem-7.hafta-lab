#include <stdio.h>
#include <stdlib.h>
int main(){
	char A[30];
	char B[50];
	strcpy(A,"Kedimin adi Can'dir.");
	strcpy(B,A);
	printf("yeni dizim:%s",B);
	return 0;
}
