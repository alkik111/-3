#pragma once
#include <iostream>
#include <algorithm>

void QuickSort(int mas[], int Low, int High) {
	int i = Low, j = High;
	int pv = mas[(Low + High) / 2];

	while (i <= j) {
		while (mas[i] < pv)
			i++;
		while (mas[j] > pv)
			j--;
		if (i <= j) {
			std::swap(mas[i], mas[j]);
			i++;
			j--;
		}
	}

	if (Low < j) {
		QuickSort(mas, Low, j);
	}
	if (i < High) {
		QuickSort(mas, i, High);
	}


}