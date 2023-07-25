#include "main.h"

char *_getenv(const char *name)
{
	int i = 0;
	char *var;
	char *tmpenv;

	while (environ[i])
	{
		tmpenv = environ[i];
		var = strtok(tmpenv, "=");
		if (strcmp(var, name) == 0)
		{
			var = strtok(NULL, "\0");
			return (var);
		}
		i++;
	}
	return (NULL);
}
