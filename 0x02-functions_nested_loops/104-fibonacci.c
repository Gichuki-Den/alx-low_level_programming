#include <stdio.h>
/**
* fibo_seq - prints fibonacci numbers of first 98 order
*/
void fibo_seq(void)
{
	unsigned long long x = 2;
	unsigned long long y = 1;
	unsigned long long z;
	unsigned long long count = 2;

	printf("1, 2");

	while (count < 98)
	{
		z = x + y;
		printf(", %llu, ", z);
		x = z;
		y = x;
		count++;
	}
	printf("\n");
}
/**
 * main - return o and call the fibo_seq function
 * return 0 always 
 */
int main(void)
{
	fibo_seq();

	return (0);
}
