//
// Created by Youssef Soliman on 11/11/2025.
//
#include <iostream>
using namespace std;
#ifndef UNTITLED9_PERSON_H
#define UNTITLED9_PERSON_H


class Person {
protected:
    string name;
    int id;
public:
    Person();
    Person(string n,int id);
    void display();
    ~Person();
};


#endif //UNTITLED9_PERSON_H
