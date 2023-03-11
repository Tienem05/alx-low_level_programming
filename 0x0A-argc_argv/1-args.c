#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments it receives
 * @argc: argument count
 * @argv: argunment vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
