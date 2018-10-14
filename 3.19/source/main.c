#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float loan, rate;
	int day;
	while (1) {
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &loan);
		if (loan == -1) break;
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter tern of the loan in days: ");
		scanf_s("%d", &day);
		printf("The interest charge is $%.2f\n\n", loan*rate*day / 365);
	}
	system("pause");
	return 0;
}