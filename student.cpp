#include "student.h"
#include "degree.h"
#include <string>
using namespace std;

//Default constructor
Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = -1;
	this->daysInCourse[0] = -1;
	this->daysInCourse[1] = -1;
	this->daysInCourse[2] = -1;
	this->degreeProgram;
}

//Constructor with all parameters
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeprogram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysInCourse[0] = daysInCourse[0];
	this->daysInCourse[1] = daysInCourse[1];
	this->daysInCourse[2] = daysInCourse[2];
	this->degreeProgram = degreeProgram;
}

//Accessor/Getter functions
string Student::getStudentID() const {
	return studentID;
}

string Student::getFirstName() const {
	return firstName;
}

string Student::getLastName() const {
	return lastName;
}

string Student::getEmailAddress() const {
	return emailAddress;
}

int Student::getAge() const {
	return age;
}

int Student::getDaysInCourse() const {
	return daysInCourse;
}

DegreeProgram Student::getDegreeProgram() const {
	return degreeProgram;
}

//Mutator/Setter functions
void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
	for (i = 0; i < 3; ++i) {
		this->daysInCourse[i] = daysInCourse[i];
	}
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

//print function
void print() const {
	for (i = 0; i < 3; ++i) {
		cout << studentID << "\t" << 
			firstName << "\t" << 
			lastName << "\t" << 
			age << "\t" 
			<< '{' << Student::getDaysInCourse(0) << ',' <<
			Student::getDaysInCourse(1) << ',' <<
			Student::getDaysInCourse(2) << '}' << "\t" <<
			degreeProgram << endl;
	}
}