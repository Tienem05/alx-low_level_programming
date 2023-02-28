#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -m program that generates random valid passwords
 * program 101-crackme
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
