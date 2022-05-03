#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - check if char is number
 * @s: char to check
 * Return: 1 if number and 0 otherwise
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
 * main - entry point, prints the minimum number of
 * coins to make change for an amount of money
 * @argc: cmd line argument count
 * @argv: char array of arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int j, xcode, coins, cents, d;
	int c[5] = {25, 10, 5, 2, 1};

	xcode = 1, j = 0, coins = 0;
	if (argc == 2)
	{
		if (_isnumber(argv[1]))
		{
			xcode = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					d = cents / c[j];
					if (d == 0)
					{
						j++;
					}
					else
					{
						coins += d;
						cents -= (d * c[j]);
					}
				}
			}
		}
	}
	if (xcode == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (xcode);
}
