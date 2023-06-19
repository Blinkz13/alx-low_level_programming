#include <stdio.h>
#include <unistd.h>

/**
 * main - printing using the command
 * Return: 1 returns no value
 **/

int main(void)
{
char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int len = sizeof(str) - 1;
write(2, str, len);
fprintf(stderr, "(%d chars long)n", len);
fprintf(stderr, "[stderr]: n(0 chars long)n");
return (1);
}
