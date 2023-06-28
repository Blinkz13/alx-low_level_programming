#include <stdio.h>

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
