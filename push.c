#include "monty.h"
/**
 * push - add node to list
 * @argument: int
 */
void push(char *argument)
{
	int data;
	stack_t *new;

	if (!check_input(argument))
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n"
				, monty.line_number);
		free_it_all();
		exit(EXIT_FAILURE);
	}

	data = atoi(argument);
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		free_it_all();
		exit(EXIT_FAILURE);
	}
	new->n = data;
	new->next = monty.stack;
	new->prev = NULL;
	if (new->next)
		new->next->prev = new;
	monty.stack = new;
}
