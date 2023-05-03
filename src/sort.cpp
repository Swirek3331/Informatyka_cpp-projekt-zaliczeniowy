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
