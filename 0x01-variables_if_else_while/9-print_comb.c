#include <stdio.h>
#include <stdlib.h>
/**
 * main - statment
 * Description: print all single combanation of
 * a givin digit
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if ( c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
