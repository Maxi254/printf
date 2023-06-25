#include "main.h"

/**
 * print_number - print a number
 * @args: list of args
 * Return: no of chars printed
 */

int print_number(va_list args)
{
	int a = va_arg(args, int);
	int div = 1;
	int lens = 0;
	unsigned int num;

	if (a < 0)
	{
		lens += writer('-');
		num = (unsigned int)(-a);
	}
	else
	{
		num = (unsigned int)a;
	}

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		lens += writer('0' + num / div);
		num %= div;
		div /= 10;
	}

	return lens;
}

/**
 * print_unsigned_number - unsigned int
 * @n: number
 * Return: total
 */
int print_unsigned_number(unsigned int n)
{
	int di = 1;
	int lens = 0;
	unsigned int num = n;

	while (num / di > 9)
		di *= 10;
	while (di != 0)
	{
		lens += writer('0' + num / div);
		num % di;
		di /= 10;
	}

	return lens;
}
