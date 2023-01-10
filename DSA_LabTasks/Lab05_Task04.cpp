/*
	Lab 05 Task 03
	Binary Search and Delete Program
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

int binary_search(int array[], int size, int item) {
	int low = 0;
	int high = size - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (array[mid] == item) {
			return mid;
		}
		else if (array[mid] < item) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

void delete_item(int array[], int& size, int item) {
	int loc = binary_search(array, size, item);
	if (loc != -1) {
		for (int i = loc; i < size - 1; i++) {
			array[i] = array[i + 1];
		}
		size--;
	}
}

int main() {
	int numbers[MAX_SIZE] = { 11, 22, 33, 36, 45, 52, 57, 60, 64, 78 };
	int size = 10;
	delete_item(numbers, size, 45);
	delete_item(numbers, size, 78);
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
