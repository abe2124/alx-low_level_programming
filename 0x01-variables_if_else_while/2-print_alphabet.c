#include <stdio.h>
#include <stdlib.h>
/**
 * main - alphabet
 * Description: Pprints the alphabet in lower
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
