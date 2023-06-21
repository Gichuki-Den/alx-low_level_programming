#include <stdio.h>
/**
* fibo - prints fibonacci numbers of first 98 order
*/
void fibo_seq(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long z;
	unsigned long count = 0;

	while (count < 50)
		if (count == 0)
		{
			printf("%lu, %lu,", x, y);
		}
		else
		{
		z = x + y;
		printf(" %lu,", z);
		x = y;
		y = z;
		}
	count++
	printf("\n");
}
/**
* main - return o and call the fibo function
* Return: Always 0.
*/
int main(void)
{
	fibo();
	return (0);
}
