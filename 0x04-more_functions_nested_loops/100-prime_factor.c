#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of a number
 *
 * Return: returns 0
 */

int main(void)
{
    long number = 612852475143;
    long factor = 2;

    while (factor <= number)
    {
        if (number % factor == 0)
        {
            number /= factor;
        }
        else
        {
            factor++;
        }
    }

    printf("%ld\n", number);
    return 0;
}
