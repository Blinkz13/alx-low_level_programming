#include <stdio.h>

/**
 * main - start of program
 * Return: 0
 */

int _putchar(char c)
{
    printf("%c", c);
    return (unsigned char)c;
}

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter++);
}
_putchar('\n');
}

int main(void)
	{
	
		print_alphabet();
		putchar('\n');

		return (0);
	}
