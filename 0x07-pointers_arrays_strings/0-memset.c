#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
