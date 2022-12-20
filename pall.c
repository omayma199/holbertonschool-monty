#include "monty.h"
/**
 * _pall - prints a stack
 * @stack: pointer to a stack_t
 * @n: line number
 */
void _pall(stack_t **stack, unsigned int n)
{
	stack_t *node, *head;
	(void) n;

	if (!stack || !(*stack))
		return;
	node = head = *stack;

	while (node)
	{
		fprintf(stdout, "%d\n", node->n);
		node = node->next;
	}
}
