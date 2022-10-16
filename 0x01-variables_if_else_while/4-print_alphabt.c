#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	Return(0);
}
