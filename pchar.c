#include "monty.h"

/**
 * m_pchar - prints top stack number as ascii
 * @node: pointer to head
 * @line_count: current line number
 * Return: void function
 */
void m_pchar(stack_t **node, unsigned int line_count)
{
	int num = 0;

	if (!*node || !node)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	num = (*node)->n;
	if ((num < 33) || (num > 127))
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	putchar(num);
	putchar('\n');
}
