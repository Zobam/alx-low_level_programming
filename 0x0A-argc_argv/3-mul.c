#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, multiplies two numbers
 * @argc: cmd line argument count
 * @argv: char array of arguments
 * Return: 0 if success and 1 if error
 */

int main(int argc, char **argv)
{
	int product, xcode;

	xcode = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		xcode = 1;
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", product);
	}
	return (xcode);
}
