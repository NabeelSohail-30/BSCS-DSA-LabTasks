//Lab 01 Task 03
//Create std Struct and take values from user and display

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct student
{
	int id;
	string name;
	int age;
};

int main()
{
	student std;
	cout << "Enter information of student: " << endl << endl;

	cout << "Enter student id: ";
	cin >> std.id;
	cin.ignore();
	cout << "Enter student name: ";
	getline(cin, std.name);
	cout << "Enter student age: ";
	cin >> std.age;

	cout << endl << endl << endl;

	cout << "Student Id: " << std.id << endl;
	cout << "Student Name: " << std.name << endl;
	cout << "Student Age: " << std.age << endl;

	system("pause");
	return 0;
}