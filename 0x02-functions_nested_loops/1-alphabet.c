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

void print_alphabet(void);


int main(void)
	{
	
		print_alphabet();
		putchar('\n');

		return (0);
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
