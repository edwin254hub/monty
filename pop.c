#include "monty.h"
/**
 * pop - delete node from top of list
 * @stack: double list
 * @linenumber: line
 */
void pop(stack_t **stack, __attribute__((unused))unsigned int linenumber)
{
	stack_t *freeable = *stack;

	if (*stack)
	{
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(freeable);
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n"
				, monty.line_number);
		free_it_all();
		exit(EXIT_FAILURE);
	}
}
