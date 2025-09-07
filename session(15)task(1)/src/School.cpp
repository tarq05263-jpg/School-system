#include "School.h"


School::School(int Students)
{
    studentCounter=0;
}
School::School()
{
    studentCounter=0;
}
void School::print ()
{
    cout<<"The School Name Is : "<<schoolName<<endl;
    cout<<"The Address Is : "<<address<<endl;
    cout<<"The principal Name Is : "<<principalName<<endl;
}
School::School(string schoolName, string address, string principalName)
{
    this->schoolName = schoolName;
    this->address = address;
    this->principalName = principalName;
}
void School::addStudent(Student student)
{
    if (studentCounter < 100)
    {
        students[studentCounter] = student;
        studentCounter++;
    }
    else
    {
        cout << "The Student Is full" << endl;
    }
}
void School::printStudents()
{
    for (int i=0; i< studentCounter; i++)
    {
        students[i].print();
        cout << "-----------------" << endl;
    }
}
