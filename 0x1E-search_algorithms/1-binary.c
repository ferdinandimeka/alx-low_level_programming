#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * 
 * Return: index of the number
 */
int recursiveSearch(int *array, size_t size, int value)
{
  size_t i;
  size_t mid;

  mid = size / 2;
  if (array == NULL || size == 0)
    return (-1);

  printf("Searching in array");
  for (i = 0; i < size; i++)
    printf("%s %d", (i == 0) ? ":" : ",", array[i]);

  printf("\n");

    if (mid && size % 2 == 0)
      mid--;

    if (value == array[mid])
      return ((int)mid);

    if (value < array[mid])
      return (recursiveSearch(array, mid, value));
    mid++;

    return (recursiveSearch(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - a function that searches for a value in a sorted array of integers.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of the element in the array.
 * @value: is the value to search for.
 * 
 * Description - You can assume the array will be sorted in an ascending order, you can assume that value won't appear more than once in an array, you must print the array being searched everytime it changes.
 * 
 * Return: your function must return the index where the value is located, and if the value is not present in array or if array is NULL, return -1.  
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursiveSearch(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
