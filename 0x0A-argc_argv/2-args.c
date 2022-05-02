#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints all arguments it receives
 *  @argc: cmd line argument count
 *  @argv: char array of arguments
 *  Return: 0 always
 */

int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
