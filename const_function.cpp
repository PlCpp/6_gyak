#include <iostream>
#include "Student.h"

void printStudent(const Student& student) {
	std::cout << student.getName() << " " << student.getNeptun() << std::endl;
}

int main() {
	Student s("Darth Vader", "AAAAAA");
	printStudent(s);
	
	return 0;
}
