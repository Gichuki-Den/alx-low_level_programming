#include <stdio.h>

void print_fibonacci_sequence()
{
	unsigned int prev = 1;
	unsigned int curr = 2;

	// Print the first two Fibonacci numbers
	printf("%u, %u", prev, curr);

	for (int i = 3; i <= 98; i++)
	{
		unsigned int next = prev + curr;
		printf(", %u", next);
		prev = curr;
		curr = next;
	}

	printf("\n");
}

int main()
{
	print_fibonacci_sequence();

	return 0;
}
