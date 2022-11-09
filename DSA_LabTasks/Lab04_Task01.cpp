//Lab 04 Task 01
//Program to sort array using bubble sort

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {

	// loop to access each array element
	for (int step = 0; step < (size - 1); ++step) {

		// check if swapping occurs
		int swapped = 0;

		// loop to compare two elements
		for (int i = 0; i < (size - step - 1); ++i) {

			// compare two array elements
			// change > to < to sort in descending order
			if (array[i] > array[i + 1]) {

				// swapping occurs if elements
				// are not in intended order 
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swapped = 1;
			}
		}

		// no swapping means the array is already sorted
		// so no need of further comparison
		if (swapped == 0)
			break;
	}
}

// print an array
void printArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << "  " << array[i];
	}
	cout << "\n";
}

int main() {
	int data[10];

	// find the array's length
	int size = sizeof(data) / sizeof(data[0]);

	//input array
	cout << "Enter Elements of Array" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Enter Element no. " << i + 1 << ": ";
		cin >> data[i];
	}

	cout << endl << "Original Array" << endl;
	printArray(data, size);

	bubbleSort(data, size);

	cout << endl << "Sorted Array in Ascending Order:\n";
	printArray(data, size);

	system("pause");
	return 0;
}
