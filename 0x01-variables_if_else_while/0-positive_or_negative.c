#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - displaying a number stored in the variable n
 * and using if statment to check for conditions
 * Return: 0 returns no value
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n > 0)
	{
	printf("positive\n");
	}
	else if (n == 0)
	{
	printf("zero\n");
	}
	else
	{
	printf("negative\n");
	}

	return (0);
}
