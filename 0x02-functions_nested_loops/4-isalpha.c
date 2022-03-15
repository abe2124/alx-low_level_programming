#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: taks in a char
 * Return: 1 if letter,that uper or lower otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
