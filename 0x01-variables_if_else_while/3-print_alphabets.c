#include <stdio.h>

/**
 * main - print alphabets in bother upper and lower case
 * lowerCase - print lower case alphabets
 * upperCase - print upper case alphabets
 * Return: 0
 **/

void lowerCase(void)
{
char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
}

void upperCase(void)
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
