#include "Person.h"
#include <iostream>
using namespace std;


void myFunc(Person person) {
    cout<<"Inside myFunc()"<<endl;
    person.hasBirthday();
    person.print();
    cout<<"Leaving myFunc()"<<endl;

}
int main() {
    Person p1;
    Person p2("Will Smith");
    Person p3("Bob Taylor",85,65,"Old Man");
    Person p4("Sue Cook", -45,62,"Wise One");
    Person* pPtr = new Person();
    Person* pPtr2 = &p2;
    Person* pPtr3 = new Person("Carl");


/*
    p3.print();
    myFunc(p3);
    cout<<"back in main()"<<endl;
    p3.print();
*/

    p2=p4;
    cout<<p1<<endl;
    delete pPtr;
    //delete pPtr2;
    delete pPtr3;



    /* cout<<"Default constructor"<<endl;
    p1.print();

    cout<<"Constructor with name only"<<endl;
    p2.print();

    cout<<"Constructor passing all values"<<endl;
    p3.print();

    cout<<"Testing setters"<<endl;
    p1.setName("Darwin Turner");
    p1.setAge(20);
    p1.setHeight(67);
    p1.print();

    cout<<"Testing hasBirthday()"<<endl;
    p1.hasBirthday();
    p1.print();

    // p1.age = 55; cannot directly access private members
    // p1.isValidAge(-1); private helper function
    p1.setAge(-1);
    p1.print();

    cout<<"Testing constructor validation"<<endl;
    p4.print(); */
    return 0;
}
