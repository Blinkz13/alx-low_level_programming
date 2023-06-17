#include <stdio.h>

/**
 * main - printing using the command
 * Return: 1 returns no value
 **/

int main(void)
{
char str[LEN] = "and that piece of art is useful";
write(2, str, LEN);
return (1);
}
