#include "monty.h"

/**
 * m_pstr - prints stack as ascii code
 * @node: pointer to head
 * @line_count: current line number
 * Return: void function
 */
void m_pstr(stack_t **node, __attribute__((unused)) unsigned int line_count)
{
	stack_t *temp = *node;

	while (temp && (temp->n != 0) && ((temp->n) > 32) && ((temp->n) < 128))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}
	putchar('\n');
}
