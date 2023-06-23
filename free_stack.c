#include "monty.h"

/**
 * free_stack - free linked list
 * @head: head of stack
 */
void free_stack(stack_t *head)
{
	stack_t *x;
       
	x = head;
	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
