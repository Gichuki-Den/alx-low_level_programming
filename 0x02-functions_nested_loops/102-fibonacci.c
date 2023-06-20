#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long count, start, second, final;

	start = 0;
	second  = 1;

	for (count = 0; count < 50; count++)
	{
		final = start + second;
		start = second;
		second = final;
		printf("%lu", k);
		if (count <= 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
