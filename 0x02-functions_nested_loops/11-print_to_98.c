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

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

