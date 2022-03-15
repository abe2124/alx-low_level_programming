#include "main.h"

/**
 *  main - print the alphabet
 *  that prints all off them alphabet fllowed by new line
 *  Return: 0
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
