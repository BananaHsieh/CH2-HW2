#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number = 0;
	float a, balance, charge, credits, limit;
	while (1) {
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &number);
		if (number == -1) break;
		printf("Enter begining balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charge: ");
		scanf_s("%f", &charge);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);

		a = balance + charge - credits;
		printf("Account:\t%d\n", number);
		printf("Credit limit:\t%f\n", limit);
		printf("Balnce:\t\t%f\n", a);
		if (a > credits)printf("Credit Limit Exceeded.\n");
		else printf("Credit Limit Not Exceeded.\n");
	}
	system("pause");
	return 0;

}