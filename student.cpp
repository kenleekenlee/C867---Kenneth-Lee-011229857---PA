#include "student.h"
#include <string>
#include <iostream>

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
	degreeProgram = DegreeProgram::SOFTWARE;
}

//Constructor with all parameters
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
		this->studentID = studentID;
		this->firstName = firstName;
		this->lastName = lastName;
		this->emailAddress = emailAddress;
		this->age = age;
		this->daysInCourse[0] = daysInCourse1;
		this->daysInCourse[1] = daysInCourse2;
		this->daysInCourse[2] = daysInCourse3;
		this->degreeProgram = degreeProgram;
}

//Accessor/Getter functions
string Student::getStudentID() const {
	return this->studentID;
}

string Student::getFirstName() const {
	return this->firstName;
}

string Student::getLastName() const {
	return this->lastName;
}

string Student::getEmailAddress() const {
	return this->emailAddress;
}

int Student::getAge() const {
	return this->age;
}

int Student::getDaysInCourse(int position) const {
	return this->daysInCourse[position];
}

DegreeProgram Student::getDegreeProgram() const {
	return this->degreeProgram;
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
	this->daysInCourse[0] = daysInCourse1;
	this->daysInCourse[1] = daysInCourse2;
	this->daysInCourse[2] = daysInCourse3;
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

//print function
void Student::print() const {
	cout << studentID << "\t" << firstName << "\t" << lastName << "\t" << age << "\t{";
	
	for (int i = 0; i < 3; ++i) {
		if (i != 2) {
			cout << getDaysInCourse(i) << ", ";
		}
		else {
			cout << getDaysInCourse(i);
		}
	}
			
	cout << "}\t";
	
	if (getDegreeProgram() == DegreeProgram::NETWORK) {
		cout << "NETWORK" << endl;
	}
	else if (getDegreeProgram() == DegreeProgram::SECURITY) {
		cout << "SECURITY" << endl;
	}
	else if (getDegreeProgram() == DegreeProgram::SOFTWARE) {
		cout << "SOFTWARE" << endl;
	}
}