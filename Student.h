//
// Created by Will Smith on 10/12/26.
//

#ifndef PERSONMONDAY1_STUDENT_H
#define PERSONMONDAY1_STUDENT_H
#include "Person.h"


class Student: public Person {
    private:
        double gpa;
    public:
     double getGPA();
     void setGPA(double gpa);
    Student();
    Student(double gpa);
    Student(string name, int age, double height, char* nickname, double gpa);
    void print() const;
    ~Student();

};



#endif //PERSONMONDAY1_STUDENT_H
