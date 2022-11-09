//Lab 04 Task 03
//Program to sort array using selection sort

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

// perform selection sort
void selectionSort(int array[], int size) {
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			//swap if not sorted
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
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

	selectionSort(data, size);

	cout << endl << "Sorted Array in Ascending Order:\n";
	printArray(data, size);

	system("pause");
	return 0;
}
