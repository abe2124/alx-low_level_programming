#include "main.h"
/**
 * _abs - function that prints the absolute value of a number
 * @n: taks in an integer vlue
 * Return: 1 if > 0, 0 if == 0, positive if negative
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

