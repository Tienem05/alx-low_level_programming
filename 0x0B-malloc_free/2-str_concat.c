#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string to be concatenated upon.
 * @s2: string to be concatenated to s1.
 * Return: if concatenation fails - NULL.
 * Otherwise - a pointer to the newly allocated space in memory
 * containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	char *nul = "";
	unsigned int a, b, i, j;

	a = b = i = j = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[a] != '\0')
		a += 1;
	while (s2[b] != '\0')
		b += 1;
	b += 1;
	concat_str = malloc((a + b) * sizeof(*concat_str));
	if (concat_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i += 1;
	}
	while (s2[j] != '\0')
	{
		concat_str[i] = s2[j];
		j += 1;
		i += 1;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
