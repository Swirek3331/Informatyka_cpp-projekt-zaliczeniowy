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
 * Sortowanie b¹belkowe.
 * Przyjmujê tablcie typu ca³kowitego.
 * Wydajnoœæ: O(n^2).
 */
void bubbleSort(int array[25])
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25 - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

/*
 * Sortowanie selektywne.
 * Przyjmujê ci¹g liczb ca³kowitych.
 * Z³o¿onoœæ czasowa: O(n^2).
 */
void selectSort(int array[25])
{
	for (int i = 0; i < 25; i++)
	{
		int min = i;
		for (int j = i + 1; j < 25; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		
		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}

/*
 * Sortowanie wstawieniowe
 * Z³o¿onoœæ: O(n^2).
 */
void insertionSort(int array[25])
{
	for (int i = 1; i < 25; i++)
	{
		int key = array[i];
		int j = i - 1;
		
		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
}

/*
 * Bogo sort.
 * To jest ¿art, a nie algorytm.
 */
 
bool sorted(int array[25])
{
	int a = 25;
	while (--a > 1)
	{
		if (array[n] < array[n - 1])
			return false;
	}
	return true;
}

void bogoSort(int array[25])
{
	while(!sorted(array))
	{
		for (int i = 0; i < n; i++)
			std::swap(array[i], array[std::rand() % 25]);
	}
}
