#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit of a number
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();

	printf("Last digit of %d is ", n);

	if (n % 10 > 5)
	{
	printf("and is greater than 5n");
	}
	else if (n % 10 == 0)
	{
	printf("and is 0n");
	}
	else
	{
	printf("and is less than 6 and not 0n");
	}

	return (0);
}
