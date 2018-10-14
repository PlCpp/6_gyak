#include<iostream>
#include "Student.h"

int main() {
	//objektum létrehozása fordítási időben
	
	Student staticStudent("Darth Vader", "AAAAAA");
	std::cout << staticStudent.getName() << std::endl;
	
	Student* dinamicStudent = new Student("Luke Skywalker", "BBBBBB");
	std::cout << dinamicStudent->getName() << std::endl;
	
	delete dinamicStudent;
	return 0;
}
