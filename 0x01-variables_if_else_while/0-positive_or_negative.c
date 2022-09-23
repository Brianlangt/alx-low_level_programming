#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* main function description goes here*/

/**
* main - program to print whether something is positive or negative
*
* Return = 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n");
	}
	else if (n == 0)
	{
		printf("%d is 0\n");
	}
	else
	{
		printf("%d is positive\n");
	}
	return (0);
}
