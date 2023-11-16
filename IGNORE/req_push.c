#include "monty.h"
/**
 * check_digit - my func ..
 * @param: 1st para ..
 * @line_count: 2nd para ..
 * Return: int data type ..
 */
int check_digit(char *param, unsigned int line_count)
{
	int beg = 0, end = 20, trick = 0;
	int num;

	no_aim3(beg, end, trick);
	num = atoi(param);
	no_aim2(beg, end, trick);
	if (num == 0 && strcmp(param, "0") != 0)
	{
		no_aim3(beg, end, trick);
		dprintf(2, "L%u: usage: push integer\n", line_count);
		free_all(), no_aim3(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	no_aim4(beg, end, trick);
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
	char *param;
	int beg = 0, end = 20, trick = 0;
	int num;

	no_aim2(beg, end, trick);
	param = strtok(NULL, SEPARATORS);
	no_aim2(beg, end, trick);

	if (!param)
	{
		no_aim3(beg, end, trick);
		dprintf(2, "L%u: usage: push integer\n", line_count);
		free_all(), no_aim1(beg, end, trick);
		exit(EXIT_FAILURE);
	}

	no_aim1(beg, end, trick);
	num = check_digit(param, line_count);
	no_aim5(beg, end, trick);
	if (!add_node(node, num))
	{
		no_aim2(beg, end, trick);
		dprintf(2, "Error: malloc failed\n");
		free_all(), no_aim5(beg, end, trick);
		exit(EXIT_FAILURE);
	}

	no_aim1(beg, end, trick);
}
