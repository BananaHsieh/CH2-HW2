#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//(A)---------------------------------
	printf("(A)\n");
	for (int i = 1; i < 11; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//(B)---------------------------------
	printf("(B)\n");
		for (int i = 10; i >0; i--) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
	//(C)---------------------------------
	printf("(C)\n");
	
		for (int i = 0; i <11; i++) {
			for (int j = 0; j < 10; j++) {
				if(j-i>=0)	printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	//(D)---------------------------------
	printf("(D)\n");
	
		for (int i = 1; i <11; i++) {
			for (int j = 10; j >0; j--) {
				if(i-j<0)	printf(" ");
				else printf("*");
			}
			printf("\n");
		}
	system("pause");
	return 0;
}