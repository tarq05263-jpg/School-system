#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class School
{
private:
    int studentCounter;
    string schoolName;
    string address;
    string principalName;
    Student students[100];

public:
    School();
    School(int Students);
    School(string schoolName, string address, string principalName);
    void addStudent(Student student);
    void print();
    void printStudents();
};

#endif
