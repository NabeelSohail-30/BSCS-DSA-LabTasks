//Lab 01 Task 02
//Program to take input array, sort and print it

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int arr[10], temp;

	cout << "Program to sort array in Asc Order" << endl << endl;

	for (int i = 0; i < 10; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}

	cout << endl << endl <<
		"array before sort" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << endl << endl << "array after sort" << endl << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	system("pause");
	return 0;
}