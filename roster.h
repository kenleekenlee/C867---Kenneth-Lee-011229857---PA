#pragma once
#include <string>
#include <array>
#include "degree.h"
#include "student.h"

using namespace std;

class roster {

public:
	//Default constructor
	roster();
	
	//Vars to use for iteration
	size_t	dLocation;	//search delimiter location
	int index;

	Student* classRosterArray[5];

	//Mutator/Setter functions
	void parse(string studentData);
	void add(int index, 
		string studentID,
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

	//Deconstructor
	~roster();

private:
	string studentID;
	string	firstName;
	string	lastName;
	string	emailAddress;
	int		age;
	int		daysInCourse1;
	int		daysInCourse2;
	int		daysInCourse3;
	DegreeProgram	degreeProgram;
};

