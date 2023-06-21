#include <stdio.h>
void fibo_seq(void)
{
	int current = 1;
	int next = 2;
	int count = 2;

	printf("1, 2");

	while (count < 98)
	{
		next = next + current;
		current = next - current;
		count++;

		count++;
	}
	printf("\n");
}
int main(void)
{
	fibo_seq();

	return (0);
}
