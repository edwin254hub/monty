#include "monty.h"
/**
 * stack_op - makes it stack format (default)
 * @stack: head of stack
 * @linenumber: current ln
 *
 */
void stack_op(stack_t **stack, unsigned int linenumber)
{
	(void)stack;
	(void)linenumber;
	monty.is_queue = false;
}
