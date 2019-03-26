#include <iostream>
#include "Student.h"

Student doSth(Student student) { //copy ctor
	return student; //copy ctor mert érték szerint adunk vissza egy objektumot
}

int main() {
	Student s("Darth Vader", "AAAAAA");
	s.addMark(2);
	s.addMark(5);
	Student s2 = s; //copy ctor
	Student s3(s); //copy ctor
	
	std::cout << s.printMarks() << std::endl;
	std::cout << s2.printMarks() << std::endl;
	std::cout << s3.printMarks() << std::endl;
	
	std::cout << (s == s2) << std::endl;
	std::cout << s << std::endl;
	doSth(s);
	
	return 0;
}
