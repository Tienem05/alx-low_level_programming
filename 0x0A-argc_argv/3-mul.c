#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc <= 2)
	{
		printF("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = (atoi(argv[i]) * atoi(argv[(i - 1)]));
	}
	printf("%d\n", mul);

	return (0);
}
