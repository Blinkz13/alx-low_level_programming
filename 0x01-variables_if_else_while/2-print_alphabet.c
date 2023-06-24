#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Return: 0
 **/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

{
	putchar(letter);
	letter++;
}
	putchar('\n');
	return (0);
}
