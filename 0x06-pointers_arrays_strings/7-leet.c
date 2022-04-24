#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char array_num[] = {'4', '3', '1', '0', '7'};
	char array_uppercase[] = {'A', 'E', 'L', 'O', 'T'};
	char array_lowercase[] = {'a', 'e', 'l', 'o', 't'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == array_lowercase[j] || s[i] == array_uppercase[j])
				s[i] = array_num[j];
		}
		i++;
	}
	return (s);
}
