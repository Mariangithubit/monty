#include "monty.h"

/**
 * f_pall - prints all the values on the stack
 * @head: head of the stack
 * @counter: line_number
 * Return: void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
