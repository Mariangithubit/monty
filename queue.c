#include "monty.h"

/**
 * f_queue -  sets the format of the data to a queue (FIFO)
 * @head: the head of stack
 * @counter: line_number
 * Return: void
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the nd of stack
 * @head: the header
 * @n: new vlaue
 * Retrun: void
 */
void add_queue(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *h = *head;

	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (h == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		h->next = new_node;
		new_node->prev = h;
	}
}