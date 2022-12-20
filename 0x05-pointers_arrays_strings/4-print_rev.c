#inclde "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line.
 * @s: An input string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = o;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	-putchar('\n');
}

