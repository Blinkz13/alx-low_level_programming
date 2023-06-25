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
	};

	char alpha = 'A';

	while (alpha <= 'Z')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
