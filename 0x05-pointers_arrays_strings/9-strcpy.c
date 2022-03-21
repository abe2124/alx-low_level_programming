#include "main.h"
/**
 * *_strcpy - copis the string ponted to by src
 * including the terminatiing null value(\0)
 * to the buffer to by dest
 * @dest: pointerr to buffer in which we copy
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
