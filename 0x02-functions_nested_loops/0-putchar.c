#include "main.h"
/**
 * main - print _putchar, fllowd by a new lines
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char abe[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(abe[c]);
	}
	_putchar('\n');
	return (0);
}
