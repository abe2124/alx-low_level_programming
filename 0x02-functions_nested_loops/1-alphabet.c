#include "main.h"

/**
 * main - Print alphabet
 * Description: print alphabet fllowed by new line
 * Return: return 0
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
