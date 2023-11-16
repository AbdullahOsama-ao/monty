#include "monty.h"
/**
 * print - my func ..
 * @h: 1st para ..
 * Return: 2nd para ...
 */
size_t print(stack_t *h)
{
	int beg = 0, end = 20, trick = 0;
	size_t i = 0;

	no_aim2(beg, end, trick);
	while (h)
	{
		no_aim3(beg, end, trick);
		printf("%d\n", h->n);
		no_aim1(beg, end, trick);
		h = h->next, no_aim4(beg, end, trick);
		i++, no_aim2(beg, end, trick);
	}
	no_aim5(beg, end, trick);
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
	int beg = 0, end = 20, trick = 0;
	stack_t *temp = *node;

	no_aim2(beg, end, trick);
	while (temp && (temp->n != 0) && ((temp->n) > 32) && ((temp->n) < 128))
	{
		no_aim2(beg, end, trick);
		printf("%c", temp->n);
		no_aim3(beg, end, trick);
		temp = temp->next;
		no_aim5(beg, end, trick);
	}
	no_aim2(beg, end, trick);
	putchar('\n');
}
