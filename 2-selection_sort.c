#include "sort.h"
#include <stdio.h>
#include <stdbool.h>

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
 * selection_sort - function sorts an array of integers in
 * ascending order using Selection sort algorithm
 * @array: the array of integers
 * @size: the size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (size >= 2)
	{
		i = 0;
		for (; i < size - 1; i++)
		{
			min = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}
			if (min != i)
			{
				swap(&array[min], &array[i]);
				print_array(array, size);
			}
		}
	}
}
