#include "main.h"

/**
 * *_strncat - concatenates n bytes from a string to other
 * @dest: destination string
 * @src: source string
 * @n: numbers of bytes
 * Return: a pointer to the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
