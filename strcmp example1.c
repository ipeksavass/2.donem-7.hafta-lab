#include <stdio.h>
#include <stdlib.h>
int main(){
	char A[15],B[15];
	int res;
	strcpy(A,"muratarda");
	strcpy(B,"murathasan");
	res=strcmp(A,B);
	if(res < 0)
		printf("A < B'dir.");
	else if(res > 0)
		printf("A > B'dir.");
	else
		printf("A ve B esittir.");
	return 0;	
}
