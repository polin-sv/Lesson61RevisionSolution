#include "logic.h"

int main() {
	int size;
	cout << "input number of marks: ";
	cin >> size;

	int* array = create(size);

	init_random(array, size, 2, 5);

	print("array: " + convert(array, size) + "\n");



	print("mark five " + to_string(result_of_marks(array, size, 5)) + "%\n");
	print("mark four " + to_string(result_of_marks(array, size, 4)) + "%\n");
	print("mark three " + to_string(result_of_marks(array, size, 3)) + "%\n");
	print("mark two " + to_string(result_of_marks(array, size, 2)) + "%\n");


	remove(array);

	return 0;
}