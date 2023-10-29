#pragma once
#include <string>
#include <array>
#include "degree.h"

using namespace std;

class roster {

public:
	Student* classRosterArray[5];
	void add(string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int daysInCourse1,
		int daysInCourse2,
		int daysInCourse3,
		DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll() const;
	void printAverageDaysInCourse(string studentID) const;
	void printInvalidEmails() const;
	void printByDegreeProgram(DegreeProgram degreeProgram) const;

};

