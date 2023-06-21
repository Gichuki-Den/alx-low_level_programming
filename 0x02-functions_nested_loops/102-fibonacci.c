#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */
void fibo(void)
{
	unsigned int i;
	unsigned int f = 1;
	unsigned int s = 2;
	unsigned int r;

	for (i = 1; i < 50; i++)
	{
		if (i == 1)
		{
			printf("%u, %u, ", f, s);
			continue;
		}
		r = f + s;
		printf("%u, ", r);
		f = s;
		s = r;
    }
}

int main()
{
	fibo();
	return 0;
}
