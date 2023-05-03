#include <iostream>
#include <vector>

#include "sort.h"

int main()
{	
	int numbers[25];
	fillAnArray(numbers);
	
	std::cout << "Grupa losowych liczb calkowitych: ";
	displayAnArray(numbers);
	
    return 0;
}
