#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @head: the head of stack 
 * @counter: line_number
 * Return: void
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, x;

	h = *head;
	while(h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->n;
	h->n = h->next->n;
	h->next->n = x;
}
