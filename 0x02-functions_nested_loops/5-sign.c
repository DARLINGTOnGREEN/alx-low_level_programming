#include "main.h"
/**
 * print_sign - check numbers.
 * @n: numbers to check.
 * Return: 0 or 1.
 */
int print_sign(int n)
{
	int f;

	if (n > 0)
	{
		f = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		f = 0;
		_putchar('0');
	}
	else
	{
		f = -1;
		_putchar('-');
	}
	return (f);
}
