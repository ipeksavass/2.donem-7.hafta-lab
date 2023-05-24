#include <stdio.h>
#include <stdlib.h>
int main(){
	char A[35];
	char X[68];
	strcpy(A,"Adim:Ipek ");
	strcpy(X,"Soyadim:Savas");
	strcat(A,X);
	printf("|%s|",A);
	return 0;
}
