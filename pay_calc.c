#include<stdio.h>
#include<stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
	int hours = 0;
	double grossPay = 0.0;
	double taxes = 0.0;
	double netpay = 0.0;

	printf("Please enter the number of hours you worked this week: \n");
	scanf("%d", &hours);

	if(hours <= 40)
		grossPay = hours * PAYRATE;
	else
	{
		grossPay = 40 * PAYRATE;
		double overTimePay = (hours - 40) * (PAYRATE * 1.5);
		grossPay += overTimePay;
	}

	//calculate taxes
	if (grossPay <= 300)
	{
		taxes = grossPay * TAXRATE_300;
	}
	else if (grossPay > 300 && grossPay <= 450)
	{
		taxes = 300 * TAXRATE_300;
		taxes += (grossPay - 300) * TAXRATE_150;
	}
	else if (grossPay > 450)
	{
		taxes = 300 * TAXRATE_300;
		taxes += 150 * TAXRATE_150;
		taxes += (grossPay - 450) * TAXRATE_REST;
	}

	//Calcualte net pay
	netpay = grossPay - taxes;

	printf("Your gross pay is: %.2f\n", grossPay);
	printf("Your taxes are: %.2f\n", taxes);
	printf("Net pay is: %.2f\n", netpay);

	return 0;
}