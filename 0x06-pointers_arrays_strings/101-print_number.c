#include "main.h"

/**
 * print_number - Prints an integer
 * @n: input integer
 * Return: no return value
 */

void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
	}
	else
	{
		m = n;
	}
	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (count = 0; count >= 1; count /= 10)
	{
		_putchar(((m / xount) % 10) + 48);
	}
}
