#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elemnts of an array of integer value
 * followed by a new line
 * @a: array value to be printed
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}

