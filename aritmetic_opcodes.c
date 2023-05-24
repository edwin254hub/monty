#include "monty.h"

/**
 * exec_div - executes the div opcode
 * @stack: stack to read the numbers
 * @line_number: number of line that is executed
 * Return: void function
 */
void exec_div(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack, *next;

	if (actual == NULL || actual->next == NULL)
		error_handler("div", -99, line_number);
	if (actual->n == 0)
		error_handler("div", -126, line_number);
	next = actual->next;
	next->n =  next->n / actual->n;
	exec_pop(stack, line_number);
}
/**
 * exec_mod - executes the mod opcode
 * @stack: stack to read the numbers
 * @line_number: number of line that is executed
 * Return: void function
 */
void exec_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack, *next;

	if (current == NULL || current->next == NULL)
		error_handler("mod", -99, line_number);
	if (current->n == 0)
		error_handler("mod", -126, line_number);
	next = current->next;
	next->n =  next->n % current->n;
	exec_pop(stack, line_number);
}
/**
 * exec_add - executes the add opcode
 * @stack: stack to read the numbers
 * @line_number: number of line that is executed
 * Return: void function
 */
void exec_add(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack, *next;

	if (actual == NULL || actual->next == NULL)
		error_handler("add", -99, line_number);
	next = actual->next;
	next->n =  next->n + actual->n;
	exec_pop(stack, line_number);
}
/**
 * exec_sub - executes the div opcode
 * @stack: stack to read the numbers
 * @line_number: number of line that is executed
 * Return: void function
 */
void exec_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack, *next;

	if (actual == NULL || actual->next == NULL)
		error_handler("sub", -99, line_number);
	next = actual->next;
	next->n =  next->n - actual->n;
	exec_pop(stack, line_number);
}
/**
 * exec_mul - executes the div opcode
 * @stack: stack to read the numbers
 * @line_number: number of line that is executed
 * Return: void function
 */
void exec_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack, *next;

	if (actual == NULL || actual->next == NULL)
		error_handler("mul", -99, line_number);
	next = actual->next;
	next->n =  next->n * actual->n;
	exec_pop(stack, line_number);
}
