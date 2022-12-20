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
	int array[10] = { 11, 22, 33, 36, 45, 52, 57, 60, 64, 78 };
	int size = 10;
	int loc = binary_search(array, size, 52);
	if (loc == -1) {
		cout << "Item 52 not found" << endl;
	}
	else {
		cout << "Item 52 found at index " << loc << endl;
	}

	loc = binary_search(array, size, 33);
	if (loc == -1) {
		cout << "Item 33 not found" << endl;
	}
	else {
		cout << "Item 33 found at index " << loc << endl;
	}

	system("pause");
	return 0;
}
