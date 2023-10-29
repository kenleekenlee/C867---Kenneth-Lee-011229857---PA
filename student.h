#pragma once
class student
{
public:
	//Accessor/Getter functions
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int getDaysInCourse1();
	DegreeProgram getDegreeProgram();

	//Mutator/Setter functions
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse1(int daysInCourse1);
	setDaysInCourse2(int daysInCourse2);
	setDaysInCourse3(int daysInCourse3);
	setDegreeProgram(DegreeProgram degreeprogram);

	//print function
	void print() const;

private:
	string	studentID;
	string	firstName;
	string	lastName;
	string	emailAddress;
	int		age;
	int		daysInCourse[3];
	DegreeProgram	degreeprogram;
};

