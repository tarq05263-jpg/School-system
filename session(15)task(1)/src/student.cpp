#include <student.h>
#include <iostream>
using namespace std;
Student::Student()
{

}
Student::Student(string name, int age, string gender, string address, string phoneNumber, string email,
                 int studentID, string gradeLevel, float GPA)
    : Person(name, age, gender, address, phoneNumber, email)
{
    this->studentID = studentID;
    this->gradeLevel = gradeLevel;
    this->GPA = GPA;
}

void Student::setStudentID(int studentID)
{
    this->studentID = studentID;
}
void Student::setGradeLevel(string gradeLevel)
{
    this->gradeLevel = gradeLevel;
}
void Student::setGPA(float GPA)
{
    this->GPA = GPA;
}

int Student::getStudentID()
{
    return studentID;
}
string Student::getGradeLevel()
{
    return gradeLevel;
}
float Student::getGPA()
{
    return GPA;
}

void Student::print()
{
    printPerson();
    cout << "The Student ID Is: " << studentID << endl;
    cout << "The Grade Level Is: " << gradeLevel << endl;
    cout << "The GPA Is: " << GPA << endl;
}
