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

Course() {

}
Course(string courseCode, string courseName, int maxStudents, Student *students, int currentStudents) {
    this->courseCode=courseCode;
    this->courseName=courseName;
    this->maxStudents=maxStudents;
    this->students=students;
    this->currentStudents=currentStudents;
}
void displayCourseInfo() {
    cout<<"Course Code: "<<courseCode<<endl;
    cout<<"Course Name: "<<courseName<<endl;
    cout<<"Current Students: "<<currentStudents<<endl;
    cout<<"Max Students: "<<maxStudents<<endl;
}
void addStudent(const Student &s) {
    Student* newStudents=new Student[currentStudents+1];
    for (int i=0;i<=currentStudents;i++) {
        newStudents[i]=students[i];
    }
    newStudents[currentStudents+1]=s;
    students=newStudents;
    currentStudents++;
    delete newStudents;
}
~Course() {
    delete students;
}

getcourseCode() {
    return courseCode;
}

getcourseName() {
    return courseName;
}

};


#endif //UNTITLED9_COURSE_H
