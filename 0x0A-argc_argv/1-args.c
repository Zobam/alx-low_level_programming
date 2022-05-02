#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints number of passed args
 * @argc: cmd line argument count
 * @argv: char array of arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
