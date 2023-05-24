#include "monty.h"
/**
 * mul - muls top two stack mems
 * @stack: double list
 * @linenumber: line
 */
void mul(stack_t **stack, __attribute__((unused))unsigned int linenumber)
{
	stack_t *freeable;

	if (*stack && (*stack)->next)
	{
		(*stack)->next->n *= (*stack)->n;
		freeable = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		free(freeable);
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't mul, stack too short\n",
				monty.line_number);
		free_it_all();
		exit(EXIT_FAILURE);
	}
}
