#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>

#include "sort.h"

void displayAnArray(int array[25])
{
	for (int i = 0; i < 25; i++)
	{
		std::cout << array[i] << ", ";
	}
}

void fillAnArray(int array[25])
{
	srand(time(NULL));
	
	for (int i = 0; i < 25; i++)
	{
		array[i] = std::rand() % 100 + 1;
	}
}

/*
 * Sortowanie b�blekowe.
 * Przyjmuj� tablcie typu ca�kowitego.
 * Wydajno��: O(n^2).
 */
void bubbleSort(int array[25])
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; i < 25 - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;	
			} 
		}
	}
}
