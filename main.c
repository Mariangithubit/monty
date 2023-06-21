#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * free_stack - free linked list
 * @head: head of stack
 */
void free_stack(stack_t *head)
{
	stack_t *x = head;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}

/**
 * add_node - add nod to stack
 * @head: head of stack
 * @n: new element
 * Return: void
 */
void add_node(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *x = *head;

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (x)
		x->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

/**
 * main - code intepreter
 * @argc: count args
 * @argv: value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	size_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (arg != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "rror: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free (content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
