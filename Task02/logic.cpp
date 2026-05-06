// Task 02 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее арифметическое ненулевых 
// элементов вектора.
#include "logic.h"
double count_elements(int* array, int size) {
	int count = 0;
	

	for (int i = 0; i < size; i++)
	{
		if (array[i] != 0) {
			count++;
		}
	}

	return count;
}

double sum_of_elements(int* array, int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != 0) {
			sum += array[i];
		}
	}

	return sum;
}

double calculate_arithmetical_mean_of_nonzero_elements(int* array, int size) {
	if (sum_of_elements(array, size) == 0 || size <= 0) {
		return 0;
	}

	return sum_of_elements(array, size) / count_elements(array, size);
}