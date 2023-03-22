#include "function_poiters.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to a function that prints name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if  (name != 0 && f != 0)
		f(name);
}

