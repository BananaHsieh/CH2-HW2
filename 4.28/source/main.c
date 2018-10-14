#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  type,item,hour;
	float salary, rate,sale,money;
	printf("Manager = 1\tHourly worker = 2\tCommission worker = 3\tPieceworker = 4\n");
	printf("input your type (-1 to end): ");
	scanf_s("%d", &type);
	
	switch (type) {
	if (type == -1)break;
	case 1:
		printf("You are mamager\n");
		printf("input your weekly salary: ");scanf_s("%f", &salary);
		printf("Your salary is \t$%.2f\n", salary);
		break;
	case 2:
		printf("You are Hourly worker\n");
		printf("input your workhours: ");scanf_s("%d", &hour);
		printf("input your hourly rate: ");scanf_s("%f", &rate);
		if (hour <= 40)salary = hour * rate;
		else salary = 40 * rate + (hour - 40)*rate*1.5;
		printf("Your salary is \t$%.2f\n", salary);
		break;
	case 3:
		printf("You are Commission worker\n");
		printf("input your gross weekly sale: "); scanf_s("%f", &sale);
		printf("Your salary is \t$%.2f\n", 250+sale*0.057);
		break;
	case 4:
		printf("You are Pieceworker\n");
		printf("input how many items you completed: "); scanf_s("%d", &item);
		printf("input item's price: "); scanf_s("%f", &money);
		printf("Your salary is \t$%.2f\n", item*money);
		break;
	}
	system("pause");
	return 0;
}