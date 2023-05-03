#include <iostream>
#include <vector>

#include "sort.h"

int main()
{	
	int numbers[25], option;
	bool running = true;
	
	fillAnArray(numbers);
	
	std::cout << "Grupa losowych liczb calkowitych: ";
	displayAnArray(numbers);
	
	while (running)
	{
		std::cout << "Wybierz metode do posortowania zbioru." << std::endl;
		std::cout << "Oto mozliwe opcje: " << std::endl;
		
		std::cout << "0 - sortowanie babelkowe" << std::endl;
		std::cout << "1 - sortowanie selektywne"<< std::endl;
		std::cout << "2 - sortowania przez wstawienie"<< std::endl;
		
		std::cout << "Opcja: ";
		std::cin >> option;
		
		switch (option)
		{
			case 0:
				bubbleSort(numbers);
				running = false;
				std::cout << "Po sortowaniu: ";
				displayAnArray(numbers);
				break;
			case 1:
				selectSort(numbers);
				running = false;
				std::cout << "Po sortowaniu: ";
				displayAnArray(numbers);
				break;
			case 2:
				insertionSort(numbers);
				running = false;
				std::cout << "Po sortowaniu: ";
				displayAnArray(numbers);
				break;
			default:
				std::cout << "Nie znana opcja" << std::endl;
				std::cout << "Wybierz jeszcze raz" << std::endl;
				running = true;
		}
	}
	
	
	
    return 0;
}
