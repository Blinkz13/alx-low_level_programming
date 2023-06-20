#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - displaying last digits of a value in a variable
 * Return: 0 does not return any value
 **/

int main(void)
{int n = -98;
	int last_digit = abs(n) % 10;

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
	{
	printf("greater than 5n");
	}
	else if (last_digit == 0)
	{
	printf("0n");
	}
	else
	{
	printf("less than 6 and not 0n");
	}

	return (0);
}
