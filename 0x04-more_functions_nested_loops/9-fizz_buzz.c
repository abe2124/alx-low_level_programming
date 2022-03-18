#include <stdio.h>
/**
 * main - main
 *
 * Return: a number
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
			return (0);
		}
	}
}
