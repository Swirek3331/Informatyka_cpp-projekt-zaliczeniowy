#include <iostream>
#include <vector>

#include "sort.h"

int main()
{	
	int numbers[25];
	fillAnArray(numbers);
	
	std::cout << "Grupa losowych liczb calkowitych: ";
	displayAnArray(numbers);
	
	std::cout << "Wybierz metode do posortowania zbioru." << std::endl;
	std::cout << "Oto mozliwe opcje: " << std::endl;
	
	std::cout << "1 - sortowanie babelkowe" << std::endl;
	
    return 0;
}
