#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string parameter to look for substring
 * @accept: only bytes to be included from string
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, accepted_len = 0, len = 0;

	while (accept[accepted_len] != '\0')
		accepted_len++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < accepted_len; j++)
			if (s[i] == accept[j])
				len++, j = accepted_len;
			else
				if (j == accepted_len - 1)
					goto exit;
exit: return (len);
}
