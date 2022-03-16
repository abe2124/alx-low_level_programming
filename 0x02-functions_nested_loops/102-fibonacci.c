#include <stdio.h>
/**
 * main - prints the first so Fibonacci, starting wth 1 and 2
 * @void: no argument
 * Return: return o
 */
int main(void)
{
	long fib1 = 1, fib2 = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
