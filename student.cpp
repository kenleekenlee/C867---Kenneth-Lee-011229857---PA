#include "student.h"
#include "degree.h"
#include <string>
using namespace std;

//Default constructor
student::student() {
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

//Constructor
student::student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeprogram) {
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

int student::getDaysInCourse() const {
	return daysInCourse;
}

DegreeProgram student::getDegreeProgram() const {
	return degreeProgram;
}

//Mutator/Setter functions
void student::setStudentID(string studentID) {
	this->studentID = studentID;
}

void student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void student::setLastName(string lastName) {
	this->lastName = lastName;
}

void student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void student::setAge(int age) {
	this->age = age;
}

void student::setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
	for (i = 0; i < 3; ++i) {
		this->daysInCourse[i] = daysInCourse[i];
	}
}

void student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

//print function
void print() const {
	for (i = 0; i < 3; ++i) {
		cout << studentID << "\t" << 
			firstName << "\t" << 
			lastName << "\t" << 
			age << "\t" 
			<< '{' << student::getDaysInCourse(0) << ',' <<
			student::getDaysInCourse(1) << ',' <<
			student::getDaysInCourse(2) << '}' << "\t" <<
			degreeProgram << endl;
	}
}