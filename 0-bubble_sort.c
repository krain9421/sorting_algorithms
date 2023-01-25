#include "sort.h"
#include <stdio.h>

/**
 * swap - functions that swaps two array values
 * @xp: the first value
 * @yp: the second value
 *
 * Return: void
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - function sorts an array of integers in
 * ascending order
 * @array: the array of integers
 * @size: the size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	i = 0, j = 0;
	if (size >= 2)
	{
		for (; i < size - 1; i++)
		{
			for (; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
			}
		}
	}
}
