#include "main.h"
/**
 * print_last_digit - print last digit of number.
 * @n: arguement of function.
 * Return: integar value
 */
int print_last_digit(int n)
{
		int last;

		last = n % 10;

		if (last < 0)
			last = last * -1;

		_putchar(last + '0');

		return (last);
}
