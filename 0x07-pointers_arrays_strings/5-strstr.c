#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: initial string
 * @needle: substring
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *tom;
	char *tnm;

	while (*haystack != '\0')
	{
		tom = haystack;
		tnm = needle;

		while (*tom == *haystack && *tnm != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			tnm++;
		}
		if (*tnm == '\0')
			return (tom);
		haystack = tom + 1;
	}
	return (NULL);
}
