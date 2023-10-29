// C687 - Kenneth Lee 011229857 - PA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include "roster.h"
using namespace std;

int main()
{
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Kenneth,Lee,klee684@wgu.edu,38,20,40,60,SOFTWARE"
    };

    student* classRosterArray[5];


    // Output header info
    cout << "Course Title: C867 - SCRIPTING AND PROGRAMMING - APPLICATIONS" << endl;
    cout << "Programming Language Used: C++ " << endl;
    cout << "Student ID: 011229857" << endl;
    cout << "Student Name: Kenneth Lee" << endl;


}

