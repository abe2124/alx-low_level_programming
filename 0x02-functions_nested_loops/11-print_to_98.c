#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all nutural number upto 98
 * @n: taks integer
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
	}
	printf("\n");
}
