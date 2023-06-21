#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */
void fibo(void)
{
	unsigned long long prev = 1;
	unsigned long long curr = 2;

	printf("%llu, %llu", prev, curr);

	for (int i = 3; i <= 50; i++)
	{
		unsigned long long next = prev + curr;
		printf(", %llu", next);
		prev = curr;
		curr = next;
	}
}
int main()
{
	fibo();
	return 0;
}
