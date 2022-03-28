i#include "main.h"
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

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
