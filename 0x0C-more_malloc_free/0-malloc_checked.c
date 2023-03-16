#include "main.h"
#include <stdlib>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *  * @b: sizeof int
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *alx;

	alx = malloc(b);
	if (alx == NULL)
		exit(98);
	else
		return (alx);
}
