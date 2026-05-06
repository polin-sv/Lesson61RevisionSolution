#include "logic.h"

int main() {
	int size;
	cout << "input number of marks: ";
	cin >> size;

	int* array = create(size);

	init_random(array, size, 2, 5);

	print("array: " + convert(array, size) + "\n");

	// Обработка результатов экзамена
// Введите исходные данные: 5 4 4 5 3 4 3 4 5 3 4 4 3 4 4 3 5 3 3 4 5 5 5 5 4 5 5 5 2 5
// Результаты самостоятельной работы (или экзамена):
//	пятерок 40 % (12)
//	четверок 33.3 % (10)
//	троек 23.3 % (7)
//	двоек 3.4 % (1)

	print("mark five " + to_string(result_of_marks(array, size, 5)) + "%\n");
	print("mark four " + to_string(result_of_marks(array, size, 4)) + "%\n");
	print("mark three " + to_string(result_of_marks(array, size, 3)) + "%\n");
	print("mark two " + to_string(result_of_marks(array, size, 2)) + "%\n");


	remove(array);

	return 0;
}