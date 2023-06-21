#include <stdio.h>
/**
* fib - Prints fibonacci numbers of 50
*/
void fib(void)
{
	unsigned long i;
	unsigned long f = 0;
	unsigned long  s = 1;
	unsigned long  r;

	for (i = 1; i < 50; i++)
	{
		r = f + s;
		printf("%lu, ", r);
		f = s;
		s = r;
	{
}
/**
* main - return o and call the fib function
* Return: Always 0.
*/
int main(void)
{
	fib();
	return (0);
}
