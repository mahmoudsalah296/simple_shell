#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @member: array to which memory will be allocated
 * @size: size of array
 * Return: pointer or NULL
 */

void *_calloc(unsigned int member, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i = 0;

	if (member == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(member * size);
	if (ptr == NULL)
		return (NULL);

	while (i < (member * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
