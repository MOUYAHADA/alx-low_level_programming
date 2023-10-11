/**
 * int_index - searches for int in array
 * @array: array
 * @size: size of array
 * @cmp: compare function
 * Return: index / -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
