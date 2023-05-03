#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>

#include "sort.h"

void displayAnArray(std::vector<int> array)
{
	for (int i = 0; i < array.size(); i++)
	{
		std::cout << array[i] << ", ";
	}
}

void fillAnArray(std::vector<int> array)
{
	srand(time(NULL));
	
	for (int i = 0; i < array.size(); i++)
	{
		array[i] = std::rand() % 100 + 1;
	}
}
