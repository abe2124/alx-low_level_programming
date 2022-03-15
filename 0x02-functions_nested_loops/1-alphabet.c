#include "main.h"

/**
 * main - Print alphaba
 * Desc: print alphabat - prints the alphabet, in lower, fllowd by new line
 * Retrn: return 0
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
