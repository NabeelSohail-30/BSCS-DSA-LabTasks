//Lab 01 Task 03
//Create std Struct and take values from user and display using pointer

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct student {
	int id;
	string name;
	int age;
};

int main() {
	student std;
	student *ptrStd = &std;
	cout << "Enter information of student: " << endl << endl;

	cout << "Enter student id: ";
	cin >> ptrStd->id;
	cin.ignore();
	cout << "Enter student name: ";
	getline(cin, ptrStd->name);
	cout << "Enter student age: ";
	cin >> ptrStd->age;

	cout << endl << endl << endl;

	cout << "Student Id: " << ptrStd->id << endl;
	cout << "Student Name: " << ptrStd->name << endl;
	cout << "Student Age: " << ptrStd->age << endl;

	system("pause");
	return 0;
}