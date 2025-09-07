#ifndef TEACHER_H
#define TEACHER_H
#include <person.h>
#include <iostream>
using namespace std;
class Teacher : public Person
{
private:
    int teacherID;
    string subjectSpecialization;
    float salary;
public:
    Teacher();
    Teacher(string name, int age, string gender, string address, string phoneNumber, string email,
            int teacherID, string subjectSpecialization, float salary);
    void setTeacherID(int teacherID);
    void setSubjectSpecialization(string subjectSpecialization);
    void setSalary(float salary);
    int getTeacherID();
    string getSubjectSpecialization();
    float getSalary();
    void printTeacher();
};

#endif
