#include <stdio.h>

/**
 * main - display combination of numbers
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	if (i != 9)
	{
	putchar(',');
	}
	}

	putchar('\n');

	return (0);
}
