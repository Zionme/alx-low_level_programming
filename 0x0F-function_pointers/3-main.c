#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that performs simple opearations.
 * @argc: argument count.
 * @argv: array of arguments.
 * Return: exits 0, 98 on argc, 99 om illigal operator.
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("error\n");
		exit(99);
	}

	printf("d\n", func(atoi(argv[1], atoi(argc[3]))));
	return (0);
}

