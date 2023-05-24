#include "monty.h"
/**
 * swap - swap place of top two members in stack
 * @stack: double list
 * @linenumber: line
 */
void swap(stack_t **stack, __attribute__((unused))unsigned int linenumber)
{
	int tmp;

	if (*stack && (*stack)->next)
	{
		tmp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = tmp;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n",
				monty.line_number);
		free_it_all();
		exit(EXIT_FAILURE);
	}
}
