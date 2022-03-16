#include <stdio.h>
/**
 * main - the sum of the even valued terms
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a = 1, b = 2, sum = 0, r = 2;

	while (sum < 40000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
		{
			r += sum;
		}
	}
	printf("%li\n", r);
	return (0);
}
