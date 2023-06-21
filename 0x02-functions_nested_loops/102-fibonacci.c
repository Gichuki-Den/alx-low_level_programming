#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long z;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i <= 0)
		{
			printf("%lu, %lu, ", x, y);
		}
		else if (i > 0)
		{
			z = x + y;
			printf("%lu, ", z);
			x = y;
			y = z;
		}
	}
}
