#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	char *sign;
	char operator;
	int a, b, answer;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
