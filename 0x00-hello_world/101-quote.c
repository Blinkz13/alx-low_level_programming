#include <stdio.h>
#include <unistd.h>

/**
 * main - printing using the command
 * Return: 1 returns no value
 **/

int main(void)
{
char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2,str,59);
return (1);
}
