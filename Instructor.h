//
// Created by Youssef Soliman on 11/11/2025.
//
#include <iostream>

#include "Person.h"
using namespace std;
#ifndef UNTITLED9_INSTRUCTOR_H
#define UNTITLED9_INSTRUCTOR_H


class Instructor:public Person{
private:
    string department;
    int experienceYears;
public:
    Instructor();
    Instructor(string n,string d,int ey);
    void display();
    ~Instructor();
};


#endif //UNTITLED9_INSTRUCTOR_H
