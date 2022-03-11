#include <stdio.h>
/**
 * main -main alphabat in both
 * Description: prints the alphabet in both lower and uper
 * fllowd by a new line
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
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
