#include "main.h"
/**
 * main - entry point
 * @argc: arguments count
 * @argv: araay of arguments
 * @envp: environment variables
 * Return: 0 on success
 */
int main(int argc, char **argv, char **envp)
{
	if (!isatty(STDIN_FILENO))
	{
		_notatty();
	}
}
