#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name followed by a new line.
 * @argc: argument count.
 * @argv: an array of pointers to the arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

