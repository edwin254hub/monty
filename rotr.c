#include "monty.h"
/**
 * rotr- rotate bottom to top
 * @stack: head of stack
 * @linenumber: current ln
 *
 */
void rotr(stack_t **stack, __attribute__((unused))unsigned int linenumber)
{
	stack_t *first, *second;

	if (!(*stack) || !(*stack)->next)
	{
		return;
	}

	first = *stack;

	while (first->next->next)
	{
		first = first->next;
	}
	second = first->next;
	first->next = NULL;
	(*stack)->prev = second;
	second->next = *stack;
	second->prev = NULL;
	*stack = second;
}
