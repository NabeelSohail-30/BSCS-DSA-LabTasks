//Lab 04 Task 02
//Program to sort array using insertion sort

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

// perform insertion sort
void insertionSort(int array[], int size) {

	for (int step = 1; step < size; step++) {
		int key = array[step];
		int j = step - 1;

		// Compare key with each element on the left of it until an element smaller than
		// it is found.
		// For descending order, change key<array[j] to key>array[j].
		while (key < array[j] && j >= 0) {
			array[j + 1] = array[j];
			--j;
		}
		array[j + 1] = key;
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

	insertionSort(data, size);

	cout << endl << "Sorted Array in Ascending Order:\n";
	printArray(data, size);

	system("pause");
	return 0;
}
