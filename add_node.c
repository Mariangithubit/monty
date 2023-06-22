#include "monty.h"

/**
 * add_node - add node to stack
 * @head: head of stack
 * @n: new element
 * Return: void
 */
void add_node(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *x = *head;

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (x)
		x->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
