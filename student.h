#pragma once
class student
{
public:
	student();
	
	//Accessor/Getter functions
	string getStudentID() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	int getAge() const;
	int getDaysInCourse(int position) const;
	DegreeProgram getDegreeProgram() const;

	//Mutator/Setter functions
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int position, int daysInCourse1);
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

