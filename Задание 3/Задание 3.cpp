#include <iostream>
#include "QuickSort.h"
/*
QuickSort являеться 1 из самых быстрых способов сортировки. Он использует прямой обмен.
Особенностью этого метода являеться деление группы на 2 независимые подгруппы в каждой этераации и наличие опорного элемента(pv)
*/
int main() {
	int StandartMas[] = { 67, 47, 99, 6, 0, 5, 8, 7, 12, 53 };
	int n = sizeof(StandartMas) / sizeof(StandartMas[0]);

	std::cout << "Original array: ";
	for (int i = 0; i < n; i++) {
		std::cout << StandartMas[i] << " ";
	}


	QuickSort(StandartMas, 0, n - 1);
	std::cout << "\nSorted array: ";
	for (int i = 0; i < n; i++) {
		std::cout << StandartMas[i] << " ";
	}

	return 0;
}