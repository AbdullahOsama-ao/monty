#include "monty.h"
/**
 * check_digit - my func ..
 * @param: 1st para ..
 * @line_count: 2nd para ..
 * Return: int data type ..
 */
int check_digit(char *param, unsigned int line_count)
{
	int num;

	num = atoi(param);
	if (num == 0 && strcmp(param, "0") != 0)
	{
		dprintf(2, "L%u: usage: push integer\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	return (num);
}

/**
 * m_push - my func ...
 * @node: 1st para ..
 * @line_count: 2nd para ...
 * Return: nothing ..
 */
void m_push(stack_t **node, unsigned int line_count)
{
	int num;
	char *param;

	param = strtok(NULL, SEPARATORS);

	if (!param)
	{
		dprintf(2, "L%u: usage: push integer\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	num = check_digit(param, line_count);
	if (!add_node(node, num))
	{
		dprintf(2, "Error: malloc failed\n");
		free_all();
		exit(EXIT_FAILURE);
	}
}
