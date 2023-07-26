#include "main.h"

/**
 * prompt - Display Shell Prompt
 */
void prompt(void)
{
	printf("$ ");
}
/**
 * print_error - Display Error Based on Command and How Many Time Shell Looped
 * @input:User Input
 * @counter:Simple Shell Count Loop
 * @argv:Program Name
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *er;

	printf(argv[0]);
	printf(": ");
	er = _itoa(counter);
	printf(er);
	free(er);
	printf(": ");
	printf(input);
	printf(": not found\n");
}
