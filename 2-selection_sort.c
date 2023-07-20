#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - A function that sorts an array of integers
 *
 * @array: A pointer to an array of integers
 * @size: The size of array
 * Return: A void type return type
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, temp, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			for (k = 0; k < size; k++)
			{
				if (k > 0)
					printf(", ");
				printf("%d", array[k]);
			}
			printf("\n");
		}
	}
}
