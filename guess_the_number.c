#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	time_t t;
	srand((unsigned) time(&t));

	int rando = rand()% 20 + 1;
	//printf("%d\n", rando);

	printf("Welcome to the guessing game!\n");
	printf("Please choose a number between 1 and 20.\nYou will have 5 attempts.\n");

	for(int count = 1; count<=5; count++)
	{
		printf("Attempt number %d.\n", count);
		printf("Please enter your guess: \n");
		int guess;
		scanf("%d", &guess);

		if(guess == rando)
		{
			printf("You have won!\n");
			break;
		}else if(count == 5)
		{
			printf("You have lost. The correct number is: %d\n", rando);
		}

		else if(guess < rando)
		{
			printf("Your number is too low.\n");
			continue;
		}else if(guess > rando)
		{
			printf("Too high!\n");
			continue;
		}
	
		


	}

	


	return 0;
}