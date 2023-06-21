#include <stdio.h>
/**
* main - prints fibonacci numbers of 50
* Return: Always 0.
*/
int main(void)
{
	int first = 1;
	int second = 2;
	int next = 0;
	int sum = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
		{
			sum += first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);
}
