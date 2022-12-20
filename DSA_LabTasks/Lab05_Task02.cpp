#include <iostream>
using namespace std;

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

int main() {
	int array[10] = { 1, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int size = 10;
	int item = 5;
	int loc = binary_search(array, size, item);
	if (loc == -1) {
		cout << "Item not found" << endl;
	}
	else {
		cout << "Item found at index " << loc << endl;
	}
	system("pause");
	return 0;
}
