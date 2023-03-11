#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc: argument counter
 * @argv: pointer to an array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
