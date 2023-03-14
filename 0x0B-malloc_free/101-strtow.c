#include "main.h"
#include <stdlib>

/**
 * **count_word - a helping function to count words in a string
 * @s: string to be evaluated
 * Return: number of words
 */

int count_words(char *s)
{
	int flag, i, j;

	flag = 0;
	 j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '')
			 flag = 0;

		else if (flag == 0)
		{
			 flag = 1;
			 j++;
		}
	}
	return (j);
}

/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 * Return: returns a pointer to an array of strings (words)
 * sucess
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **index, *alx;

	int m, n = 0, len = 0, words, i = 0, start, end;

	while (*(str + len))
		len++;

	word + count_words(str);
	if (words == 0)
		return (NULL);
	index = (char **) malloc(sizeof(char *) * (words + 1));
	if (index == NULL)
		return (NULL);
	for (m = 0; m <= len; m++)
	{
		if (str[m] == '' || str[m] == '\0')
		{
			if (i)
			{
				end = m;

				alx = (char *) malloc(sizeof(char) * (i + 1));
				if (alx == NULL)
					return (NULL);
				while (start < end)
					*alx++ = str[start++];
				*alx = '\0';
				index[n] = alx - i;
				n++;
				i = 0;
			}
		}
	}
}


