#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted array of integers 
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * 
 * Description - You can assume that array will be sorted in ascending order, You can use the sqrt() function included in <math.h>, Every time you compare a value in the array to the value you are searching for, you have to print this value
 * 
 * Return: the first index where value is located, and If value is not present in array or if array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
