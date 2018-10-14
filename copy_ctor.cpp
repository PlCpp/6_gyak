#include <iostream>
#include "Student.h"

int main() {
	Student s("Darth Vader", "AAAAAA");
	s.addMark(2);
	s.addMark(5);
	Student s2 = s;
	Student s3(s);
	
	std::cout << s.printMarks() << std::endl;
	std::cout << s2.printMarks() << std::endl;
	std::cout << s3.printMarks() << std::endl;
	
	std::cout << (s == s2) << std::endl;
	std::cout << s << std::endl;
	
	return 0;
}
