#include <stdio.h>
/**
* fibo_seq - prints the first 98 fibonacci numbers
*/
void fibo_seq(void)
{	unsigned long x = 0;
	unsigned long y = 1;
	unsigned long z;
	unsigned long i = 0;

	while (i <= 95)
	{
		z = x + y;
		if (i <= 94)
		{
			printf("%lu, ", z);
			x = y;
			y = z;
		}
		else
		{
			printf("%lu", z);
		}
		i++;
	}
	printf("\n");
}
/**
* main - return 0 and call fibo_seq function
* Return: Always  0
*/
int main(void)
{
	fibo_seq();
	return (0);
}
