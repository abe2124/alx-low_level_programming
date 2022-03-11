#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Positive or negative
 * Description: check wether a number is posetive, negetive or zero
 * Return: return 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n;);
	return (0);
