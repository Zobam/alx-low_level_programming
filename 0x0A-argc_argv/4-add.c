#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - check if received char is number
 * @s: char argument
 * Return: 1 if number else 0
 */

int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - entry point, adds positive numbers
 * @argc: cmd line argument count
 * @argv: char array of arguments
 * Return: 0 on success and 1 on error
 */

int main(int argc, char **argv)
{
	int i, sum, return_value;

	return_value = 0, sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				sum += atoi(argv[i]);
			else
				return_value = 1;
		}
	}
	if (return_value == 0)
		printf("%i\n", sum);
	else
		printf("%s\n", "Error");
	return (return_value);
}
