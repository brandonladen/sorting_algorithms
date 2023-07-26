#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - A function that sorts an array of integers
 *
 * @array: A pointer to an array of integers
 * @size: The size of the array
 * Return: Void return type
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag, temp;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
