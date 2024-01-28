#include "factors.h"

/**
 * main - main entry
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	FILE *fp;
	ssize_t line;
	char *buffer = NULL;
	size_t buffer_size = 0;

	if (argc != 2)
		exit(EXIT_FAILURE);

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((line = getline(&buffer, &buffer_size, fp)) != EOF)
	{
		factorize_number(buffer);
	}

	return (0);
}
