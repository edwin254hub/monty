#include "monty.h"
/**
 * rotl - rotates top to bottom
 * @stack: head of stack
 * @linenumber: current ln
 *
 *
 */
void rotl(stack_t **stack, __attribute__((unused))unsigned int linenumber)
{
	stack_t *first, *second;

	if (!*stack || !(*stack)->next)
	{
		return;
	}

	first = *stack;
	second = (*stack)->next;
	*stack = second;
	second->prev = NULL;

	while (second->next)
	{
		second = second->next;
	}
	second->next = first;
	first->next = NULL;
	first->prev = second;
}
