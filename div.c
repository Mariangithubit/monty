#include "monty.h"

/**
 * f_div - divides the second top element of the stack
 * by the top element of the stack
 * @head: the head of stack 
 * @counter: line_number
 * Return: void
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, x;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n, counter");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n, counter");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = h->next->n / h->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
