#include <stdlib.h>
#include "function_pointer.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
