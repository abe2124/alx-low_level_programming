#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}