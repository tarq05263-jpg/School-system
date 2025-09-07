#include <course.h>


Course::Course()
{

}
Course::Course(string courseCode, string courseName, string teacherName)
{
    this->courseCode = courseCode;
    this->courseName = courseName;
    this->teacherName = teacherName;
}


void Course::setCourseCode(string courseCode)
{
    this->courseCode = courseCode;
}
void Course::setCourseName(string courseName)
{
    this->courseName = courseName;
}
void Course::setTeacherName(string teacherName)
{
    this->teacherName = teacherName;
}


string Course::getCourseCode()
{
    return courseCode;
}
string Course::getCourseName()
{
    return courseName;
}
string Course::getTeacherName()
{
    return teacherName;
}


void Course::printCourse()
{
    cout << "The Course Code Is: " << courseCode << endl;
    cout << "The Course Name Is: " << courseName << endl;
    cout << "The Teacher Name Is: " << teacherName << endl;
}
