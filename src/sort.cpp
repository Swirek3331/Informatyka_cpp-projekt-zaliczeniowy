#include <iostream>
#include <cstdlib>
#include <vector>

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
	for (int i = 0; i < array.size(); i++)
	{
		array[i] = std::rand();
	}
}
