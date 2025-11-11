#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Person::Person() {

}
Person::Person(string n, int id) {
    name=n;
    this->id=id;
}
void Person::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
}
Person::~Person(){

}






// ==================== Student Class Implementation ====================

Student::Student() {

}

void Student::display() {
    cout<<"Year Level: "<<yearLevel<<endl;
    cout<<"Major: "<<major<<endl;
}
Student::Student(string n,int yl, string m) {
    name=n;
    yearLevel=yl;
    major=m;
}
Student::~Student() {

}






// ==================== Instructor Class Implementation ====================


Instructor::Instructor() {

}
Instructor::Instructor(string n,string d, int ey) {
    name=n;
    department=d;
    experienceYears=ey;
}
void Instructor::display() {
    cout<<"Department: "<<department<<endl;
    cout<<"Experience Years: "<<experienceYears<<endl;
}
Instructor::~Instructor() {

}





// ==================== Course Class Implementation ====================



Course::Course(string courseCode, string courseName, int maxStudents, Student *students, int currentStudents) {
    this->courseCode=courseCode;
    this->courseName=courseName;
    this->maxStudents=maxStudents;
    this->students=students;
    this->currentStudents=currentStudents;
}
void Course::displayCourseInfo() {
    cout<<"Course Code: "<<courseCode<<endl;
    cout<<"Course Name: "<<courseName<<endl;
    cout<<"Current Students: "<<currentStudents<<endl;
    cout<<"Max Students: "<<maxStudents<<endl;
}
void Course::addStudent(const Student &s) {
    Student* newStudents=new Student[currentStudents+1];
    for (int i=0;i<=currentStudents;i++) {
        newStudents[i]=students[i];
    }
    newStudents[currentStudents+1]=s;
    students=newStudents;
    currentStudents++;
    delete newStudents;
}
Course::~Course() {
    delete students;
}

string Course::getcourseCode() {
    return courseCode;
}

string Course::getcourseName() {
    return courseName;
}









// ==================== Main Function ====================
int main() {
   Student s1("Omar Nabil",2,"Informatics");
    Instructor i1("Dr.Lina Khaled","Computer Science",5);
    Course c1("CS101","Introduction to Programming",5,s1);
    
    return 0;
}
