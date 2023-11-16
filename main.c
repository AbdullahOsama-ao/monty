#include "monty.h"

stack_t **global_free;

/**
 * main - stack and queue ..
 * @argc: first aparameter ..
 * @argv: second parameter ..
 * Return: int data type ..
 */

int main(int argc, char *argv[])
{
	FILE *monty_file;
	unsigned int count_lines = 0;
	char *dataptr = NULL, *operator = NULL;
	size_t size = 0;
	stack_t *node = NULL;
	int beg = 0, end = 20, trick = 0;

	no_aim2(beg, end, trick);
	global_free = &node;
	if (argc != 2)
	{
		no_aim2(beg, end, trick);
		dprintf(2, "USAGE: monty file\n");
		free_all(), no_aim1(beg, end, trick);
		exit(EXIT_FAILURE), no_aim3(beg, end, trick);
	}
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
	{
		no_aim2(beg, end, trick);
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		free_all(), no_aim3(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	while (getline(&dataptr, &size, monty_file) != -1)
	{
		no_aim1(beg, end, trick);
		count_lines++, no_aim1(beg, end, trick);
		operator = strtok(dataptr, SEPARATORS), no_aim3(beg, end, trick);
		if (operator != NULL && operator[0] != '#')
			monty_function(operator, &node, count_lines);
	}
	pclose(monty_file);
	if (dataptr)
		free(dataptr), no_aim1(beg, end, trick);
	free_all(), no_aim2(beg, end, trick);
	return (0);
}
