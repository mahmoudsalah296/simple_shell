#include "main.h"
/**
 * _getenv - gets env variable
 * @env_var: env variable
 * Return: value of env variable
 */

char *_getenv(char *env_var)
{
	int i = 0;
	int j = 0;
	int status = 1;

	while (environ[i])
	{
		while (environ[i][j] != '=')
		{
			if (environ[i][j] != env_var[j])
				status = 0;
			j++;
		}
		if (status == 1)
			break;
		i++;
	}
	return (&environ[i][j + 1]);
}

/**
 * _env - prints environment variables
 */
void print_env(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
