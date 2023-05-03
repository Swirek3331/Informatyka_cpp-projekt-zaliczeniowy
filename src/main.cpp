#include <iostream>
#include <vector>

#include "sort.h"

using namespace std;

int main()
{	
	vector<int> numbers;
	fillAnArray(numbers);
	
	cout << "Grupa losowych liczb calkowitych: ";
	displayAnArray(numbers);
	
    return 0;
}
