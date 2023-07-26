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

	printf("%s", argv[0]);
	printf(": ");
	er = _itoa(counter);
	printf("%s", er);
	free(er);
	printf(": ");
	printf("%s", input);
	printf(": not found\n");
}
