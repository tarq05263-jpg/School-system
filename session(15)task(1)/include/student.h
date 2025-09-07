#ifndef STUDENT_H
#define STUDENT_H
#include <person.h>
#include <iostream>
using namespace std;

class Student : public Person
{
private:
    int studentID;
    string gradeLevel;
    float GPA;
public:
    Student();
    Student(string name, int age, string gender, string address, string phoneNumber, string email,
            int studentID, string gradeLevel, float GPA);
    void setStudentID(int studentID);
    void setGradeLevel(string gradeLevel);
    void setGPA(float GPA);
    int getStudentID();
    string getGradeLevel();
    float getGPA();
    void print();
};

#endif
