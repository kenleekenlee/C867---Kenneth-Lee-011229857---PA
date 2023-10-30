#include "roster.h"
#include "degree.h"
#include "student.h"
#include <string>
#include <array>
#include <iostream>

using namespace std;

roster::roster() {
	Student* classRosterArray[5];
}

void roster::parse(string studentData) {
	//Set initial delimiter location
	size_t dLocation = studentData.find(',');

	while (dLocation != -1) {
		studentID = studentData.substr(0, dLocation);	//get string from start to delimiter location
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);		//delete string from start to delimiter location
		dLocation = studentData.find(',');		//find char in new (shorter) string

		//repeat
		firstName = studentData.substr(0, dLocation);
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);
		dLocation = studentData.find(',');

		lastName = studentData.substr(0, dLocation);
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);
		dLocation = studentData.find(',');

		emailAddress = studentData.substr(0, dLocation);
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);
		dLocation = studentData.find(',');

		age = stoi(studentData.substr(0, dLocation));
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);
		dLocation = studentData.find(',');

		daysInCourse1 = stoi(studentData.substr(0, dLocation));
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);
		dLocation = studentData.find(',');

		daysInCourse2 = stoi(studentData.substr(0, dLocation));
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);
		dLocation = studentData.find(',');

		daysInCourse3 = stoi(studentData.substr(0, dLocation));
		studentData.erase(studentData.begin(), studentData.begin() + dLocation + 1);
		dLocation = studentData.find(',');

		string strdegreeProgram = studentData.substr(0, dLocation);
		if (strdegreeProgram == "NETWORK") {
			degreeProgram = DegreeProgram::NETWORK;
		}
		else if (strdegreeProgram == "SOFTWARE") {
			degreeProgram = DegreeProgram::SOFTWARE;
		}
		else if (strdegreeProgram == "SECURITY") {
			degreeProgram = DegreeProgram::SECURITY;
		}
		
		roster::add(index, studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
	}
};

void roster::add(int index,
	string studentID,
	string firstName,
	string lastName,
	string emailAddress,
	int age,
	int daysInCourse1,
	int daysInCourse2,
	int daysInCourse3,
	DegreeProgram degreeProgram) {

	this->classRosterArray[index] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

};

void roster::remove(string studentID) {
	bool studentFound = false;		//track if found or not
	
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] == nullptr) {
			continue;
		}
		else if (studentID == classRosterArray[i]->getStudentID()) {		//Match input string to studentID in classRosterArray
				delete classRosterArray[i];
				classRosterArray[i] = nullptr;		//assign nullptr to deleted object
				studentFound = true;
		}
	}

	if (studentFound == true) {
		cout << "The student with the ID: " << studentID << " has been deleted." << endl;
	}
	else {
		cout << "The student with the ID: " << studentID << " was not found." << endl;
	}
};

void roster::printAll() const {
	for (int i = 0; i < 5; ++i) {		//iterate through array
		if (classRosterArray[i] != nullptr) {		//only print if not nullptr
			classRosterArray[i]->print();
		}
		else {
			continue;
		}
	}
};

void roster::printAverageDaysInCourse(string studentID) const {
	int sumDays = 0;
	
	for (int i = 0; i < 5; ++i) {
		if (studentID == classRosterArray[i]->getStudentID()) {
			for (int j = 0; j < 3; ++j) {
				sumDays += classRosterArray[i]->getDaysInCourse(j);
			}
		cout << "Student ID: " << studentID << ", average days in course is: " << sumDays / 3 << endl;
		}
	}
};

void roster::printInvalidEmails() const {
	string tempAddr;
	bool goodAddr;
	
	for (int i = 0; i < 5; ++i) {
		goodAddr = true;
		tempAddr = classRosterArray[i]->getEmailAddress();
		if (tempAddr.find('.') == string::npos) {
			goodAddr = false;
		}
		if (tempAddr.find('@') == string::npos) {
			goodAddr = false;
		}
		if (tempAddr.find(' ') != string::npos) {
			goodAddr = false;
		}

		if (goodAddr == false) {
			cout << tempAddr << " - is invalid." << endl;
		}
	}
};

void roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
	for (int i = 0; i < 5; ++i) {
		if (degreeProgram == classRosterArray[i]->getDegreeProgram()) {
			classRosterArray[i]->print();
		}
	}
};

roster::~roster() {
	cout << "Run roster destructor" << endl;
}