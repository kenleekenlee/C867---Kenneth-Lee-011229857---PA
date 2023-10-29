#pragma once
#include "degree.h"
#include <string>
using namespace std;

class Student
{
public:
	//Default constructor
	Student();

	//Constructor
	Student(string studentID, 
		string firstName, 
		string lastName, 
		string emailAddress, 
		int age, 
		int daysInCourse[], 
		DegreeProgram degreeProgram);
	
	//Accessor/Getter functions
	string getStudentID() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	int getAge() const;
	int* getDaysInCourse() const;
	DegreeProgram getDegreeProgram() const;

	//Mutator/Setter functions
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
	setDegreeProgram(DegreeProgram degreeProgram);

	//print function
	void print() const;

private:
	string	studentID;
	string	firstName;
	string	lastName;
	string	emailAddress;
	int		age;
	int		daysInCourse[3];
	DegreeProgram	degreeProgram;
};

