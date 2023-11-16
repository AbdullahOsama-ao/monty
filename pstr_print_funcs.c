#include "monty.h"
/**
 * print - my func ..
 * @h: 1st para ..
 * Return: 2nd para ...
 */
size_t print(stack_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * m_pstr - my func ..
 * @node: 1st para ..
 * @line_count: 2nd para. ..
 * Return: nothing ..
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
