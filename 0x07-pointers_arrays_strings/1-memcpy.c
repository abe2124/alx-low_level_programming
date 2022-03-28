#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destnation positions
 * @src: source positions
 * @n: size of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		J += 1;
	}
	return (dest);
}
