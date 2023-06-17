#include <stdio.h>

/**
 * main - printing using the command
 * Return: 1 returns no value
 **/

int main(void)
{
int len = 30;
char str[LEN] = "and that piece of art is useful";
str[0] = 'a';
str[1] = 'n';
str[2] = 'd';
str[3] = ' ';
str[4] = 't';
str[5] = 'h';
str[6] = 'a';
str[7] = 't';
str[8] = ' ';
str[9] = 'p';
str[10] = 'i';
str[11] = 'e';
str[12] = 'c';
str[13] = 'e';
str[14] = ' ';
str[15] = 'o';
str[16] = 'f';
str[17] = ' ';
str[18] = 'a';
str[19] = 'r';
str[20] = 't';
str[21] = ' ';
str[22] = 'i';
str[23] = 's';
str[24] = ' ';
str[25] = 'u';
str[26] = 's';
str[27] = 'e';
str[28] = 'f';
str[29] = 'u';

write(2, str, len);
return (1);
}
