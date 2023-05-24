#include "monty.h"

/**
 * push_stack - function
 * @head: head of the list
 * @n: n value of the new node
 * Return: address of new element
 */
stack_t *push_stack(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
		error_handler("malloc", -97, 0);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (*head);
	}

	while ((*head)->prev)
		*head = (*head)->prev;

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (*head);
}
/**
 * push_queue - function
 * @head: head of the list
 * @n: n value of the new node
 * Return: address of new element
 */
stack_t *push_queue(stack_t **head, const int n)
{
	stack_t *new, *actual;

	actual = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		error_handler("malloc", -97, 0);
	new->next = NULL;
	new->n = n;

	if (actual == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (actual->next)
	{
		actual = actual->next;
	}
	actual->next = new;
	new->prev = actual;
	return (new);
}
/**
 * fstack - frees the stack
 * @head: head of the stack
 * Return: void
 */
void fstack(stack_t *head)
{
	stack_t *aux, *actual;

	actual = head;
	while (actual != NULL)
	{
		aux = actual->next;
		free(actual);
		actual = aux;
	}
}
