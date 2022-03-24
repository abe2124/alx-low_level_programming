#include "main.h"
/**
 * _strcmp - compares two strrings
 * @s1: first string to
 * @s2: second string
 * Return: less than 0 if s1 lessthan s2 o if equal else grater
 */
int _strcmp(char *s1,  char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
