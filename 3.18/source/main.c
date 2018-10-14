#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float sells;
	while (1) {
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sells);
		if (sells == -1) break;
		printf("Salary is : $%.2f\n", 200 + sells * 0.09);
	}
	system("pause");
	return 0;
}