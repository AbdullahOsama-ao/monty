#include "monty.h"
/**
 * add_node - noding ..
 * @head: head ptr ..
 * @n: an int ..
 * Return: nums of nodes ...
 */
stack_t *add_node(stack_t **head, const int n)
{
	stack_t *new, *temp;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	temp = *head;
	if (!*head)
	{
		new->next = NULL;
	}
	else
	{
		new->next = temp;
		temp->prev = new;
	}
	*head = new;
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

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;

	valor = temp->n + temp->next->n;
	m_pop(head, line_count);
	m_pop(head, line_count);
	add_node(head, valor);
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

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			temp->next->prev = NULL;
			*head = temp->next;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			if (temp->next)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
			}
			else
				temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
