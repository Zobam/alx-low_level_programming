#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string that will be searched
 * @needle: string to be found
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, i++;
		if (*needle == '\0')
			return (haystack - i);
		haystack -= (i - 1), needle -= i;
	}
	return ('\0');
}
