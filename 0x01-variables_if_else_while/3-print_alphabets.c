#include <stdio.h>

/**
 * main - print alphabets in bother upper and lower case
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
	putchar ('\n');

	char letterA = 'A';

	while (letterA <= Z)
	{
	putchar(letterA);
	letterA++;
	}
	putchar('\n');
	return (0);
}
