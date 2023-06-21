#ifndef MONTY_H
#define MONTY_H

#inlcude "stdio.h"
#inlcude "stdlib.h"
#inlcude "unistd.h"
#inlcude "string.h"
#inlcude "ctype.h"
#inlcude "sys/types.h"
#inlcude "fcntl.h"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * bus_s - carry values through the program
 * @lifi: change stack
 * @arg: argumnet value
 * @content: line content
 * @file: pointer to monty file
 */
typedef struct bus_s
{
	int lifi;
	char *arg;
	char *content;
	FILE *file;
} bus_t;
extern bus_t bus;

void f_push(stack_t **head, unsigned int counter);
void f_pall(stack_t **head, unsigned int counter);
void f_pint(stack_t **head, unsigned int counter);

#endif
