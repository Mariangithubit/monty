#include "monty.h"

/**
 * free_stack - free linked list
 * @head: head of stack
 * Return: no return
 */
void free_stack(stack_t *head)
{
	stack_t *temp;
       
	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
