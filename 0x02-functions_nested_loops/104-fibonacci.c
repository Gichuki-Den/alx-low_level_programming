#include <stdio.h>
/**
* fibo_seq - prints fibonacci numbers of first 98 order
*/
void fibo_seq(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long z;
	unsigned long count = 2;

	printf("1, 2,");

	while (count < 98)
	{
		z = x + y;
		printf(" %lu, ", z);
		x = y;
		y = z;
		count++;
	}
	printf("\n");
}
/**
* main - return o and call the fibo_seq function
*/
int main(void)
{
	fibo_seq();
	/**
	* return 0 always
	*/
	return (0);
}
