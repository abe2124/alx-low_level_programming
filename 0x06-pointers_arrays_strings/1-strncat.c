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
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
