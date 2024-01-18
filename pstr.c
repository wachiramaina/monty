#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void) counter;

	h = *head;
	while (h)
	{
		if (h->n || h->n <= 0)
		{
			break;
		}
		printf("%c\n", h->n);
		h = h->next;
	}
	printf("\n");
}
