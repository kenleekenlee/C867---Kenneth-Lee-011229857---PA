// C867 - Kenneth Lee 011229857 - PA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roster.h"
using namespace std;

const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Kenneth,Lee,klee684@wgu.edu,38,20,40,60,SOFTWARE"
};

int main()
{
    // Output header info
    cout << "Course Title: C867 - SCRIPTING AND PROGRAMMING - APPLICATIONS" << endl;
    cout << "Programming Language Used: C++ " << endl;
    cout << "WGU Student ID: 011229857" << endl;
    cout << "Student Name: Kenneth Lee" << endl;

    //Create instance of roster
    roster classRoster;

    //Parse student data
    for (int i = 0; i < 5; ++i) {
        classRoster.index = i;
        classRoster.parse(studentData[i]);
    }

    //Print all students
    classRoster.printAll();

    //Search through students and print invalid emails
    classRoster.printInvalidEmails();

    //Print each student's average days in course:
    for (int i = 0; i < 5; ++i) {
        string studentID = classRoster.classRosterArray[i]->getStudentID();
        classRoster.printAverageDaysInCourse(studentID);
    }

    //Print students with SOFTWARE degree program
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

    //Remove A3
    classRoster.remove("A3");

    //Print all (shows A3 no longer in array)
    classRoster.printAll();

    //Try to remove A3, print message saying not found
    classRoster.remove("A3");

}

