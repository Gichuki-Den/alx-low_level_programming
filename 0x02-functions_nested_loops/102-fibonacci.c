#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */
void fibo(void)
{
	unsigned long prev = 1;
	unsigned long curr = 2;

	printf("%lu, %lu", prev, curr);
	int i;
	for (i = 3; i <= 50; i++)
	{
		unsigned long next = prev + curr;
		printf(", %lu", next);
		prev = curr;
		curr = next;
	}

	printf("\n");
}
int main()
{
	fibo();
	return 0;
}
