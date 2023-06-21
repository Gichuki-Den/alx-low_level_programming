#include <stdio.h>
/** fibo_seq - to print fibo numbers
* main - return o and call the fibo_seq function
*/
void fibo_seq(void)
{
	unsigned int x= 2;
	unsigned int y = 1;
	unsigned int z;
	unsigned int count = 2;

	printf("1, 2");

	while (count < 98)
	{
		z = x + y;
		printf(", %u, ", z);
		x = z;
		y = x;
		
		count++;
	}
	printf("\n");
}
int main(void)
{
	fibo_seq();

	return (0);
}
