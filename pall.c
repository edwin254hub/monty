#include "monty.h"

/**
 * pall - print all members
 * @stack: double list
 * @linenumber: line
 */
void pall(stack_t **stack, __attribute__((unused))unsigned int linenumber)
{
	stack_t *a = *stack;

	if (!*stack)
	{
		return;
	}
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
