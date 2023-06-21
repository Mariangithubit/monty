#include "monty.h"

/**
 * f_sub - subtracts the top element of the stack 
 * from the second top element of the stack
 * @head: the head of stack 
 * @counter: line_number
 * Return: void
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *x;
	int s, node;

	x = *head;
	for (node = 0; x != NULL; node++)
		x = x->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n, counter");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	s = x->next->n - x->n;
	x->next->n = s;
	*head = x->next;
	free(x);
}
