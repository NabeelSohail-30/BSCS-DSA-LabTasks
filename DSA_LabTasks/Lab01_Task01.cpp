//Lab 01 Task 01
//Program to print smallest integer using if

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int num1, num2, num3;

	cout << "Enter Number 01: ";
	cin >> num1;
	cout << "Enter Number 02: ";
	cin >> num2;
	cout << "Enter Number 03: ";
	cin >> num3;

	cout << endl << endl;

	if (num1 < num2 && num1 < num3)
		cout << "number 1: " << num1 << " is the smallest" << endl;

	if (num2 < num1 && num2 < num3)
		cout << "number 2: " << num2 << " is the smallest" << endl;

	if (num3 < num1 && num3 < num2)
		cout << "number 3: " << num3 << " is the smallest" << endl;

	system("pause");
	return 0;
}