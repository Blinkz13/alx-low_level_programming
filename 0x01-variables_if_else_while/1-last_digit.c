#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - displaying last digits of a value in a variable
 * Return: 0 does not return any value
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n);

    if (n < 0)
    {
        printf("%d and is less than 6 and not 0n", -1 * (n % 10));
    }
    else if (n % 10 > 5)
    {
        printf("%d and is greater than 5n", n % 10);
    }
    else if (n % 10 == 0)
    {
        printf("%d and is 0n", n % 10);
    }
    else
    {
        printf("%d and is less than 6 and not 0n", n % 10);
    }

    return (0);
}
