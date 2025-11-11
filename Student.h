//
// Created by Youssef Soliman on 11/11/2025.
//
#include <iostream>

#include "Person.h"
using namespace std;
#ifndef UNTITLED9_STUDENT_H
#define UNTITLED9_STUDENT_H


class Student:public Person{
private:
    int yearLevel;
    string major;
public:
    Student();
    Student(string n,int yl,string m);
    void display();
    ~Student();
};


#endif //UNTITLED9_STUDENT_H
