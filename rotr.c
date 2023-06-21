#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom.
 * @head: the head of stack 
 * @counter: line_number
 * Return: void
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
        stack_t *temp = *head;
	
	if (*head == NULL || (*head)->next == NULL)
        {
		return (0);
        }
	while (temp->next)
        {
		temp = temp->next;
        }
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
        (*head) = h;
}
