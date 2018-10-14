#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= i; j++) {
			for (int k = 1; k <= i; k++) {
				if (i * i == j * j + k * k) {
					printf("side 1:\t%d\tside 2:\t%d\tside 3:\t%d\n",k,j,i);
				}
				
			}
		}
	}
	system("pause");
	return 0;
}