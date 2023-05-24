#include "monty.h"
/**
 * pint - prints int in stack
 * @stack: double list
 * @linenumber: line
 */
void pint(stack_t **stack, __attribute__((unused))unsigned int linenumber)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", monty.line_number);
		free_it_all();
		exit(EXIT_FAILURE);
	}
}
