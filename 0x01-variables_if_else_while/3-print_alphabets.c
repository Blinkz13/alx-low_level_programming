#include <stdio.h>

/**
 * main - print alphabets in bother upper and lower case
 * Return: 0
 **/

/* lowerCase - print lower case letters */

lowerCase(void)
{
char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
}

/* upperCase - print upper case letters */

upperCase(void)
{
char letterA = 'A';

	while (letterA <= 'Z')
	{
	putchar(letterA);
	letterA++;
	}
	putchar('\n');
}

int main(void)
{
	lowerCase();
	upperCase();
	return (0);
}
