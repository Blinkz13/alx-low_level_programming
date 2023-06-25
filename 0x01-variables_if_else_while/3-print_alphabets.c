#include <stdio.h>

/**
 * main - print alphabets in bother upper and lower case
 * Return: 0
 **/

int main(void)
{
	char letter, alpha;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}


	for  (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
	putchar(alpha);
	}

	putchar('\n');
	return (0);
}
