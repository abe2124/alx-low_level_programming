#include "main.h"
/**
 * print_last_digit -last digit of a given number
 * @n: taks ln an integer
 * Return: returns the value
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
