/*
	Lab 05 Task 01
	Linear Search Program
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int linear_search(int array[], int size, int item) {
	for (int i = 0; i < size; i++) {
		if (array[i] == item) {
			return i;
		}
	}
	return 0;
}

int main() {
	int array[MAX_SIZE] = { 1, 2, 3, 4, 5 };
	int size = 5;
	int item = 3;
	int loc = linear_search(array, size, item);
	if (loc == 0) {
		cout << "Item not found" << endl;
	}
	else {
		cout << "Item found at index " << loc << endl;
	}
	system("pause");
	return 0;
}
