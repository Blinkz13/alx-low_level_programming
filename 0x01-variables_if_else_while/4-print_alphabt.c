#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, excluding q and e, followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'e' || letter == 'q')
	{
	continue; // Skip printing 'e' and 'q'
	}
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
