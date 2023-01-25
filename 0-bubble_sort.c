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
 * bubble_sort - function sorts an array of integers in
 * ascending order
 * @array: the array of integers
 * @size: the size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	bool swapped;
	bool isswap = true;

	i = 0;
	if (size >= 2)
	{
		while (isswap == true)
		{
			i = 0;
			swapped = false;
			for (; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					swapped = true;
					swap(&array[i], &array[i + 1]);
					print_array(array, size);
				}
			}
			if (swapped == true)
				isswap = true;
			else
				isswap = false;
		}
	}
}
