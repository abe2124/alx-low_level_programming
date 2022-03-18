#include <stdio.h>
/**
 * main - main function
 *
 * Return: a number
 */
int main(void)
{
	int i;

	for (i = 1; i <= 0; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("buzz");
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
