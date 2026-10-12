//
// Created by Will Smith on 10/12/26.
//

#include "Student.h"

#include <iostream>
#include <ostream>

double Student::getGPA() {
    return this->gpa;
}

void Student::setGPA(double gpa) {
    this->gpa = gpa;
}

Student::Student():Person() {
    cout<<"Student constructor"<<endl;
    gpa = 3.0;
}

Student::Student(double gpa):Person() {
    cout<<"Student constructor"<<endl;
    this->gpa = gpa;
}

Student::Student(string name, int age, double height, char *nickname, double gpa):Person(name,age,height,nickname) {
    cout<<"Student constructor"<<endl;
    this->gpa = gpa;
}

void Student::print() const {
   /* cout<<"Name: "<<getName()<<endl;
    cout<<"Age: "<<getAge()<<endl;
    cout<<"Height: "<<getHeight()<<endl;
    cout<<"Nickname: "<<getNickname()<<endl;*/
    Person::print();
    cout<<"GPA: "<<gpa<<endl;
}

Student::~Student() {
    cout<<"Student destructor"<<endl;
}

