#include <stdlib.h>

/**
 * array_iterator - executes @action on each element of @array
 * @array: pointer to array
 * @size: size of the array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
