#include "monty.h"

/**
 * f_queue - sets the format of the data to a queue (FIFO)
 * @head: the head of stack
 * @counter: line_number
 * Return: no return
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the end of stack
 * @head: the header
 * @n: new vlaue
 * Retrun: no return
 */
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *temp;
	
	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
