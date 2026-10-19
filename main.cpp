#include "Person.h"
#include <iostream>
#include <vector>

#include "Student.h"
using namespace std;


void myFunc(Person person) {
    cout<<"Inside myFunc()"<<endl;
    person.hasBirthday();
    person.print();
    cout<<"Leaving myFunc()"<<endl;

}
int main() {

    /*Student s1;
    Student s2(3.75);
    Student s3("Larry",55,66,"Prof",4.0);
    Person p2("Will Smith");
    Person p3("Bob Taylor",85,65,"Old Man"); */

    Person* pPtr = new Person();
    Person* pPtr2 = new Person("Tom Thumb",20,40,"Wise One");
    Student* sPtr = new Student();
    Student* sPtr2 = new Student(3.95);
    Person* pPtr3 =
        new Student("Jane Doe",35,64,"Kind One",3.75);

    vector<Person*> bus;
    bus.push_back(pPtr);
    bus.push_back(pPtr2);
    bus.push_back(sPtr);
    bus.push_back(sPtr2);
    bus.push_back(pPtr3);

    for (int i = 0; i < bus.size(); i++) {
        cout<<"Bus Passenger #"<<i+1<<endl;
        bus.at(i)->print();
        cout<<endl;
    }

    /*pPtr->print();
    cout<<endl;
    pPtr2->print();
    cout<<endl<<"Students:"<<endl;
    sPtr->print();
    cout<<endl;
    sPtr2->print();
    cout<<endl<<"Polymorphism:"<<endl;
    pPtr3->print();

*/

    delete pPtr;
    delete pPtr2;
    delete pPtr3;
    delete sPtr;
    delete sPtr2;
    /*
    p3.print(); // Person print()
    s3.print(); // Student print() - method overriding


    s3.print();
    s3.hasBirthday();
    s3.print();

   Person p1;
    Person p2("Will Smith");
    Person p3("Bob Taylor",85,65,"Old Man");
    Person p4("Sue Cook", -45,62,"Wise One");
    Person* pPtr = new Person();
    Person* pPtr2 = &p2;
    Person* pPtr3 = new Person("Carl");



    p3.print();
    myFunc(p3);
    cout<<"back in main()"<<endl;
    p3.print();


    p2=p4;
    cout<<p1<<endl;
    delete pPtr;
    //delete pPtr2;
    delete pPtr3;



    cout<<"Default constructor"<<endl;
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
