#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rad() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
	        printf("%d is zero\n", n);

	}
	return (0);

}
