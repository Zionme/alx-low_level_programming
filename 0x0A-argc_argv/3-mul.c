#include "main.h"
#include <stdio.h>

/**
 * main - a program that multiplies two numbers, followed by a new line.
 * @argc: argument counter.
 * @argv: argument value.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}

