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
	for (j = i; j < 10; j++)
	{
	putchar(i + '0');
	putchar(',');
	putchar(j + '0');
	if (i != 9 || j != 9)
	{
	putchar(',');
	}
	}
	}
	
	return (0);
}
