#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers.
 * @array: array is the pointer to the first element of the array to search in.
 * @size: size is the number of element in the array.
 * @value: is the value to search for.
 * 
 * Description - Every time you compare a value in the array to the value you are searching, you have to print the value.
 * 
 * Return: If value is not present in array or if array is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{ 
  int i;

  for (i = 0; i < size; i++)
  {
    printf("Value checked array [%d] = [%d]\n", array[i], i);
    if (array[i] == value)
      return (i);
  }
  return (-1);
}