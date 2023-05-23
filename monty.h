#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


char **code_line;


/**
 * struct stack_s - doubly linked list representation of stack (or queue)
 * @n: integer
 * @prev: points to previous element of the stack (or queue)
 * @next: points to next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* Macros */
#define pin(x) printf("%s\n", x)
#define din(x) printf("\n###\n")


/* Function prototypes */
void correct_number_of_arguments(int argc);
void viable_file(char *path, char *filename);
void free_array(char **array);
char **tokenizer(char *str, const char *delim);
size_t stack_length(stack_t **stack);
void short_stack(stack_t **stack, unsigned int line_number);
int only_nums(char *s);
void free_stack(stack_t *stack);
void make_path(char **path, char *filename);
void parse(char *path);
void (*find_opcode(char **array, unsigned int line_number, stack_t **stack))\
		(stack_t **stack, unsigned int line_number);

/* Opcodes */
void math(stack_t **stack, unsigned int line_number);
void pchar_f(stack_t **stack, unsigned int line_number);
void pstr_f(stack_t **stack, unsigned int line_number);
void rotl_f(stack_t **stack, unsigned int line_number);
void rotr_f(stack_t **stack, unsigned int line_number);
void push_f(stack_t **stack, unsigned int line_number);
void pall_f(stack_t **stack, unsigned int line_number);
void pint_f(stack_t **stack, unsigned int line_number);
void pop_f(stack_t **stack, unsigned int line_number);
void swap_f(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
