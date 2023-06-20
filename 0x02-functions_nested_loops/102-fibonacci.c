#include <stdio.h>

/**
* fib - Prints fibonacci numbers of 50
*
* Return: Always 0.
*/
void fib(void)
{
  int i;
  unsigned long f = 1;
  unsigned long s = 2;
  unsigned long r;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
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

int main(void)
{
	fib();
	return (0);
}
