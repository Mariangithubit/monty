#include "monty.h"

/**
 * f_sub - subtracts the top element of the stack
 * from the second top element of the stack
 * @head: the head of stack
 * @counter: line_number
 * Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int s, node;

	temp = *head;
	for (node = 0; temp != NULL; node++)
		temp = temp->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	s = temp->next->n - temp->n;
	temp->next->n = s;
	*head = temp->next;
	free(temp);
}
