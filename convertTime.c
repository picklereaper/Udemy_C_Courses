#include<stdio.h>
#include<stdlib.h>

//Exercise to convert minutes to years and days. 

/*Requirements:
	Ask user to input minutes.
	provide output as years and days 
	*/

int minutes = 0;
//(60 * 24 * 365, then divide by minutes entered by user)
double years = 0.0;
double days = 0.0;
double minutesInYear = 0.0;

int main()
{
	printf("Please enter the amount of minutes: \n");
	scanf("%d", &minutes);

	minutesInYear = (60 * 24 * 365);
	years = minutes / minutesInYear;
	days = (minutes / 60.0) / 24.0;

	printf("%d minutes is approximately %lf years and %lf days\n", minutes, years, days);


	return 0;
}