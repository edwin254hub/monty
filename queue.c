#include "monty.h"
/**
 * queue_op - makes it queue format
 * @stack: head of stack
 * @linenumber: current ln
 */
void queue_op(stack_t **stack, unsigned int linenumber)
{
	(void)stack;
	(void)linenumber;
	monty.is_queue = true;
}

/**
 * push_queue - add node to end list
 * @argument: int
 */
void push_queue(char *argument)
{
	int data;
	stack_t *new, *location;

	if (!check_input(argument))
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n",
				monty.line_number);
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
	location = monty.stack;
	new->n = data;
	new->next = NULL;
	if (!location)
	{
		new->prev = NULL;
		monty.stack = new;
		return;
	}
	while (location->next)
	{
		location = location->next;
	}
	location->next = new;
	new->prev = location;
}
