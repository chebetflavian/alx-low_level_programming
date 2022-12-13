#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *starting with 1 and 2 separated with commas
 *Return: 0
 */
int main(void)
{
	int num;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (num = 0; num < 50; num++)
		{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;
		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
