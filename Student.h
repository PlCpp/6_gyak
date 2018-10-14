#ifndef __STUDENT__
#define __STUDENT__

#include <string>
#include <sstream>
#include <ostream>

class Student {
	
	private:
		std::string name;
		std::string neptun;
		int* marks;
		int numOfMarks;
	
	public:
		static const int NUM_OF_TESTS = 5;
		Student(const std::string& name, const std::string& neptun):
			name(name), neptun(neptun), numOfMarks(0) {
			
			marks = new int[NUM_OF_TESTS];	
			
		}
		
		Student(const Student& other) {
			*this = other;
		}
		
		Student& operator =(const Student& other) {
			name = other.name;
			neptun = other.neptun;
			numOfMarks = other.numOfMarks;
			marks = new int[NUM_OF_TESTS];
			for (int i = 0; i < numOfMarks; ++i) {
				marks[i] = other.marks[i];
			}
			return *this;
		}
		
		std::string getName() const { return name; }
		
		std::string getNeptun() const { return neptun; }
		
		std::string printMarks() const {
			std::stringstream line;
			for (int i = 0; i < numOfMarks; ++i) {
				line << marks[i] << " ";
			}
			
			return line.str();
		}
		
		void setName(const std::string& name) {
			this->name = name;
		}
		
		void setNeptun(const std::string& neptun) {
			this->neptun = neptun;
		}
		
		void addMark(const int& mark) {
			marks[numOfMarks] = mark;
			numOfMarks++;
		}
		
		
		bool operator ==(const Student& other) const {
			return neptun == other.neptun;
		}
		
		friend std::ostream& operator <<(std::ostream& out, const Student& student) {
			out << student.name << " (" << student.neptun << ")";
			return out;
		}
		
		~Student() {
			delete[] marks;
		}
			
		
};

#endif
