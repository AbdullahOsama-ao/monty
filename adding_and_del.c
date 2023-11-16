#include "monty.h"
/**
 * add_node - noding ..
 * @head: head ptr ..
 * @n: an int ..
 * Return: nums of nodes ...
 */
stack_t *add_node(stack_t **head, const int n)
{
	stack_t *new;
	stack_t *temp;
	int beg = 0, end = 20, trick = 0;

	no_aim1(beg, end, trick);
	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	no_aim1(beg, end, trick);

	new->n = n;
	new->prev = NULL;
	temp = *head;
	if (!*head)
	{
		no_aim1(beg, end, trick);
		new->next = NULL;
	}
	else
	{
		no_aim1(beg, end, trick);
		new->next = temp;
		temp->prev = new;
	}

	*head = new;
	no_aim1(beg, end, trick);
	return (new);
}

/**
 * m_add - adding new thing ...
 * @head: head ...
 * @line_count: counting lines ...
 * Return: nothing ....
 */
void m_add(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	int valor;
	int beg = 0, end = 20, trick = 0;

	no_aim2(beg, end, trick);

	if (!head || !(*head) || !(*head)->next)
	{
		no_aim1(beg, end, trick);
		dprintf(2, "L%u: can't add, stack too short\n", line_count);
		no_aim2(beg, end, trick);
		free_all();
		no_aim1(beg, end, trick);
		exit(EXIT_FAILURE);
	}

	no_aim2(beg, end, trick);
	temp = *head;

	valor = temp->n + temp->next->n;
	m_pop(head, line_count);
	no_aim2(beg, end, trick);
	m_pop(head, line_count);
	add_node(head, valor);
	no_aim2(beg, end, trick);
}


/**
 * delete_node - my deletion ...
 * @head: first parameter ..
 * @index: second parameter ..
 * Return: int data type ...
 */
int delete_node(stack_t **head, unsigned int index)
{
	stack_t *temp;
	unsigned int i = 0;
	int beg = 0, end = 20, trick = 0;

	if (!*head)
		return (-1);
	no_aim2(beg, end, trick), temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			temp->next->prev = NULL, no_aim1(beg, end, trick);
			*head = temp->next;
		}
		else
			*head = NULL;
		free(temp), no_aim1(beg, end, trick);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			if (temp->next)
			{
				temp->prev->next = temp->next, no_aim1(beg, end, trick);
				temp->next->prev = temp->prev;
			}
			else
				temp->prev->next = NULL;
			free(temp), no_aim1(beg, end, trick);
			return (1);
		}
		temp = temp->next, no_aim1(beg, end, trick);
		i++;
	}
	no_aim1(beg, end, trick);
	return (-1);
}
