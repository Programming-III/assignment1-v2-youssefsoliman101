//
// Created by Youssef Soliman on 11/11/2025.
//
#include <iostream>
#include "Student.h"
using namespace std;
#ifndef UNTITLED9_COURSE_H
#define UNTITLED9_COURSE_H


class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

public:

    Course();
    Course(string courseCode,string courseName,int maxStudents,Student* students,int currentStudents);
    void addStudent(const Student& s);
    void displayCourseInfo();
    ~Course();
    string getcourseCode();
    string getcourseName();
};


#endif //UNTITLED9_COURSE_H
