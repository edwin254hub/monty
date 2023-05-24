#include "monty.h"

/**
 * exec_pchar - executes the pchar opcode
 * @stack: stack to read the numbers
 * @line_number: number of line that is executed
 * Return: void function
 */
void exec_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack;

	actual == NULL ? error_handler("pchar", -98, line_number) : (void) actual;
	actual->n < 0 || actual->n > 127 ?
	error_handler("pchar", -127, line_number) : (void)actual;
	putchar(actual->n);
	putchar('\n');
}
/**
 * exec_pstr - executes the pstr opcode
 * @stack: stack to read the numbers
 * @line_number: number of line that is executed
 * Return: void function
 */
void exec_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack;
	(void) line_number;
	while (actual)
	{
		if ((actual->n > 0) && actual->n < 127)
		{
			putchar(actual->n);
			actual = actual->next;
		} else
			break;
	}
	putchar('\n');
}
