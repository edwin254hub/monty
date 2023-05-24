#include "monty.h"

/**
 * is_number - checks if the string is a number
 * @c: the string
 * Return: 1 if is number digit
 * if not, 0 is returned.
 */
int is_number(char *c)
{
	char *aux = c;

	if (c == NULL)
		return (0);
	if (*aux == '-')
		aux++;

	for (; *aux != '\0'; aux++)
	{
		if (*aux < '0' || *aux > '9')
			return (0);
	}
	return (1);
}
