#include "main.h"

/**
 * _execute - execute command path
 * @args: array of arguments
 * Return: exit status
 */

int _execute(char **args)
{
	int id = fork();
	int st;

	if (id == 0)
	{
		/*execute the command*/
		if (execve(args[0], args, environ) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		/*parent process wait for the child*/
		wait(&st);
		if (WIFEXITED(st))
			st = WEXITSTATUS(st);
	}

	return (st);
}
