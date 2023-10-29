#include "student.h"

//Accessor/Getter functions
string student::getStudentID() const {
	return studentID;
}

string student::getFirstName() const {
	return firstName;
}

string student::getLastName() const {
	return lastName;
}

string student::getEmailAddress() const {
	return emailAddress;
}

int student::getAge() const {
	return age;
}

// FIXME
int student::getDaysInCourse() const {
	return days;
}

//FIXME
DegreeProgram getDegreeProgram() const {
	return DegreeProgram;
}

//Mutator/Setter functions
void student::setStudentID(string studentID) {
	studentID = studentID;
}

void student::setFirstName(string firstName) {
	firstName = firstName;
}

void student::setLastName(string lastName) {
	lastName = lastName;
}

void student::setEmailAddress(string emailAddress) {
	emailAddress = emailAddress;
}

void student::setAge(int age) {
	age = age;
}

void student::setDaysInCourse(int position, int daysInCourse) {

}


;
void setDegreeProgram(DegreeProgram degreeprogram) {
	DegreeProgram::degreeprogram = degreeprogram;
}

//print function
void print() const {
	cout << ;