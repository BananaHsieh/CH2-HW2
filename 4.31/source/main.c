#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a = 4, b = 4;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
				if (j >= a && j <= b)printf("*");
				else printf(" ");		
		}
		printf("\n");
		a--; b++;
	}
	a++; b--;
	for (int i = 0; i < 4; i++) {
		a++; b--;
		for (int j = 0; j < 10; j++) {
				if (j >= a && j <= b)printf("*");
				else printf(" ");
			}
		printf("\n");
		
	}
	system("pause");
	return 0;
}