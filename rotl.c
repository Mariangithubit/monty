#include "monty.h"

/**
 * f_rotl - rotates the stack to the top.
 * @head: the head of stack
 * @counter: line_number
 * Return: void
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *h;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	h = (*head)->next;
	h->prev = NULL;
	while (temp->next != NULL)
}
