#include "main.h"

/**
 * print alphabat 10 x - pprints all alphabate in lowercas 10 tims
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
